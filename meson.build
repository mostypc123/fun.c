project('func', 'c',
  version: '0.1.0',
  default_options: ['warning_level=3', 'werror=false', 'optimization=3',
                    'b_lto=true', 'c_std=23'])

cc = meson.get_compiler('c')

func_sources = [
  'src/func.c',
  'src/array.c',
  'src/io.c',
  'src/mem.c',
  'src/str.c',
  'src/num.c'
]

func_headers = [
  'include/array.h',
  'include/str.h',
  'include/io.h',
  'include/mem.h',
  'include/val.h',
  'include/base.h',
  'include/num.h'
]

func_dep = declare_dependency(
  include_directories: include_directories('include'),
)

func_lib = shared_library('func', func_sources,
  dependencies: func_dep,
  install: true,
  override_options: ['b_lundef=false'],
)

install_headers(func_headers)

example = executable('example', 'example/main.c',
  link_with: func_lib,
  include_directories: include_directories('include'),
  install: false,
)

test('example_test', example)
