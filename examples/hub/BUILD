cc_library(
  name = 'muduo_pubsub',
  srcs = [
    'codec.cc',
    'pubsub.cc',
  ],
  deps = '//muduo:muduo'
)

cc_binary(
  name = 'pub',
  srcs = [
    'pub.cc',
  ],
  deps = ':muduo_pubsub'
)

cc_binary(
  name = 'sub',
  srcs = [
    'sub.cc',
  ],
  deps = ':muduo_pubsub'
)

cc_binary(
  name = 'hub',
  srcs = [
    'hub.cc',
  ],
  deps = ':muduo_pubsub'
)
