cc_library(
  name = 'net',
  srcs = [
    'Acceptor.cc',
    'Buffer.cc',
    'Channel.cc',
    'Connector.cc',
    'EventLoop.cc',
    'EventLoopThread.cc',
    'EventLoopThreadPool.cc',
    'InetAddress.cc',
    'Poller.cc',
    'Socket.cc',
    'SocketsOps.cc',
    'TcpClient.cc',
    'TcpConnection.cc',
    'TcpServer.cc',
    'Timer.cc',
    'TimerQueue.cc',

    'http/HttpResponse.cc',
    'http/HttpServer.cc',

    'inspect/Inspector.cc',
    'inspect/PerformanceInspector.cc',
    'inspect/ProcessInspector.cc',
    'inspect/SystemInspector.cc',

    'poller/DefaultPoller.cc',
    'poller/EPollPoller.cc',
    'poller/PollPoller.cc',

    'protobuf/ProtobufCodecLite.cc',
  ],
  deps = [
    '//muduo/muduo/base:base',
    '//thirdparty/protobuf:protobuf',
  ]
)
