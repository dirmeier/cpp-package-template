project(
  'cppdev',
  'cpp',
  version : '0.1.0',
  default_options : [
    'buildtype=release',
    'warning_level=3',
    'cpp_std=c++17',
    'b_ndebug=if-release'],
  meson_version : '>= 0.52.0')

add_global_arguments([
  '-DPACKAGE_NAME="' + meson.project_name() + '"',
  '-DPACKAGE_VERSION="' + meson.project_version() + '"'],
  language : 'cpp'
)

cpp = meson.get_compiler('cpp')
warning_flags = []
foreach cflag: [
  '-Wdouble-promotion',
  '-Wduplicated-cond',
  '-Wduplicated-branches',
  '-Wlogical-op',
  '-Wnull-dereference',
  '-Wrestrict',
  '-Wuseless-cast',
  '-Wshadow',
  '-Wformat=1']
    if cpp.has_argument(cflag)
      warning_flags += cflag
    endif
endforeach

inc = include_directories('include')

subdir('include')
subdir('src')

if get_option('tests')
  subdir('tests')
endif


if get_option('executable')
  cppdev_cpp_sources = files([
    'src/main.cpp'
  ])

  lsbn_exe = executable(
    'cppdev',
    cppdev_cpp_sources,
    cpp_args : warning_flags,
    include_directories : inc,
    link_with : [cppdev_lib],
  )
endif
