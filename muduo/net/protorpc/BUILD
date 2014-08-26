proto_library(
  name = 'protorpc_proto',
  srcs = [
    'rpc.proto',
    'rpcservice.proto',
  ]
)

cc_library(
  name = 'protorpc',
  extra_cppflags = '-std=c++0x',
  srcs = [
    'RpcChannel.cc',
    'RpcCodec.cc',
    'RpcServer.cc',
  ],
  deps = [
    ':protorpc_proto',
    '//muduo/muduo/net:net',
  ]
)

cc_test(
  name = 'RpcCodec_test',
  srcs = ['RpcCodec_test.cc'],
  deps = [':protorpc']
)
