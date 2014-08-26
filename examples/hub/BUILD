cc_library(
  name = 'pubsub',
  extra_cppflags = '-std=c++0x',
  srcs = [
    'codec.cc',
    'hub.cc',
    'pub.cc',
    'pubsub.cc',
    'sub.cc',
  ],
  deps = '//muduo:muduo'
)

cc_binary(
  name = 'pub',
  extra_cppflags = '-std=c++0x',
  srcs = [
    'pub.cc',
  ],
  deps = ':pubsub'
)

cc_binary(
  name = 'sub',
  extra_cppflags = '-std=c++0x',
  srcs = [
    'sub.cc',
  ],
  deps = ':pubsub'
)

cc_binary(
  name = 'stress_test',
  extra_cppflags = '-std=c++0x',
  srcs = [
    'stress_test.cc',
  ],
  deps = [
    ':pubsub',
    '//toft/base/string:string',
  ],
)

cc_binary(
  name = 'hub',
  extra_cppflags = '-std=c++0x',
  srcs = [
    'hub.cc',
  ],
  deps = ':pubsub'
)
