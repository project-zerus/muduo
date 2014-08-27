cc_library(
  name = 'muduo',
  deps = [
    ':muduo_core',
    './muduo/net/protorpc:protorpc',
  ]
)

cc_library(
  name = 'muduo_core',
  export_incs = '.',
  extra_cppflags = [
    '-Wno-vla',
    '-Wno-format-nonliteral',
  ],
  srcs = [
    'muduo/base/AsyncLogging.cc',
    'muduo/base/Condition.cc',
    'muduo/base/CountDownLatch.cc',
    'muduo/base/Date.cc',
    'muduo/base/Exception.cc',
    'muduo/base/FileUtil.cc',
    'muduo/base/LogFile.cc',
    'muduo/base/Logging.cc',
    'muduo/base/LogStream.cc',
    'muduo/base/ProcessInfo.cc',
    'muduo/base/Thread.cc',
    'muduo/base/ThreadPool.cc',
    'muduo/base/Timestamp.cc',
    'muduo/base/TimeZone.cc',

    'muduo/net/Acceptor.cc',
    'muduo/net/Buffer.cc',
    'muduo/net/Channel.cc',
    'muduo/net/Connector.cc',
    'muduo/net/EventLoop.cc',
    'muduo/net/EventLoopThread.cc',
    'muduo/net/EventLoopThreadPool.cc',
    'muduo/net/InetAddress.cc',
    'muduo/net/Poller.cc',
    'muduo/net/Socket.cc',
    'muduo/net/SocketsOps.cc',
    'muduo/net/TcpClient.cc',
    'muduo/net/TcpConnection.cc',
    'muduo/net/TcpServer.cc',
    'muduo/net/Timer.cc',
    'muduo/net/TimerQueue.cc',

    'muduo/net/inspect/Inspector.cc',
    'muduo/net/inspect/PerformanceInspector.cc',
    'muduo/net/inspect/ProcessInspector.cc',
    'muduo/net/inspect/SystemInspector.cc',

    'muduo/net/http/HttpResponse.cc',
    'muduo/net/http/HttpServer.cc',

    'muduo/net/poller/DefaultPoller.cc',
    'muduo/net/poller/EPollPoller.cc',
    'muduo/net/poller/PollPoller.cc',

    'muduo/net/protobuf/ProtobufCodecLite.cc',
  ],
  deps = [
    '//boost:boost',
    '//thirdparty/protobuf:protobuf',
  ]
)
