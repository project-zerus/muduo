#include <muduo/net/GzipStream.h>

#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include <stdio.h>

BOOST_AUTO_TEST_CASE(testGzipOutputStream)
{
  muduo::net::Buffer output;
  {
    muduo::net::GzipOutputStream stream(&output);
    BOOST_CHECK_EQUAL(output.readableBytes(), 0);
  }
  BOOST_CHECK_EQUAL(output.readableBytes(), 8);
}

BOOST_AUTO_TEST_CASE(testGzipOutputStream1)
{
  muduo::net::Buffer output;
  muduo::net::GzipOutputStream stream(&output);
  BOOST_CHECK_EQUAL(stream.zlibErrorCode(), Z_OK);
  stream.finish();
  BOOST_CHECK_EQUAL(stream.zlibErrorCode(), Z_STREAM_END);
}

BOOST_AUTO_TEST_CASE(testGzipOutputStream2)
{
  muduo::net::Buffer output;
  muduo::net::GzipOutputStream stream(&output);
  BOOST_CHECK_EQUAL(stream.zlibErrorCode(), Z_OK);
  BOOST_CHECK(stream.write("01234567890123456789012345678901234567890123456789"));
  stream.finish();
  // printf("%zd\n", output.readableBytes());
  BOOST_CHECK_EQUAL(stream.zlibErrorCode(), Z_STREAM_END);
}

BOOST_AUTO_TEST_CASE(testGzipOutputStream3)
{
  muduo::net::Buffer output;
  muduo::net::GzipOutputStream stream(&output);
  BOOST_CHECK_EQUAL(stream.zlibErrorCode(), Z_OK);
  for (int i = 0; i < 1024*1024; ++i)
  {
    BOOST_CHECK(stream.write("01234567890123456789012345678901234567890123456789"));
  }
  stream.finish();
  // printf("total %zd\n", output.readableBytes());
  BOOST_CHECK_EQUAL(stream.zlibErrorCode(), Z_STREAM_END);
}

BOOST_AUTO_TEST_CASE(testGzipOutputStream4)
{
  muduo::net::Buffer output;
  muduo::net::GzipOutputStream stream(&output);
  BOOST_CHECK_EQUAL(stream.zlibErrorCode(), Z_OK);
  muduo::string input;
  for (int i = 0; i < 32768; ++i)
  {
    input += "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_-"[rand() % 64];
  }

  for (int i = 0; i < 10; ++i)
  {
    BOOST_CHECK(stream.write(input));
  }
  stream.finish();
  // printf("total %zd\n", output.readableBytes());
  BOOST_CHECK_EQUAL(stream.zlibErrorCode(), Z_STREAM_END);
}

BOOST_AUTO_TEST_CASE(testGzipOutputStream5)
{
  muduo::net::Buffer output;
  muduo::net::GzipOutputStream stream(&output);
  BOOST_CHECK_EQUAL(stream.zlibErrorCode(), Z_OK);
  muduo::string input(1024*1024, '_');
  for (int i = 0; i < 64; ++i)
  {
    BOOST_CHECK(stream.write(input));
  }
  printf("bufsiz %d\n", stream.internalOutputBufferSize());
  printf("total_in %zd\n", stream.inputBytes());
  printf("total_out %zd\n", stream.outputBytes());
  stream.finish();
  printf("total %zd\n", output.readableBytes());
  BOOST_CHECK_EQUAL(stream.zlibErrorCode(), Z_STREAM_END);
}
