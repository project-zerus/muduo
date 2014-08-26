proto_library(
  name = 'proto',
  srcs = [
    'rpc.proto',
    'rpcservice.proto',
  ]
)

cc_library(
  name = 'protorpc',
  srcs = [
    'RpcChannel.cc',
    'RpcCodec.cc',
    'RpcServer.cc',
  ],
  deps = [
    ':proto',
    '//muduo:muduo_core'
  ]
)

cc_test(
    name = 'RpcCodec_test',
    srcs = ['RpcCodec_test.cc'],
    deps = [':protorpc']
)
