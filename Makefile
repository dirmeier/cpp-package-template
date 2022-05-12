.PHONY: clean
.PHONY: test
.PHONY: format
.PHONY: lint
.PHONY: check

all: build

build:
	meson build . && meson compile -C build -v

debug:
	meson build . --buildtype debug \
	  -Db_pgo=generate \
	  -Db_sanitize=address,undefined \
	  -Db_coverage=true && \
	  meson compile -C build -v

clean:
	rm -rf build

docs:
	doxygen

test: build
	meson test -C build -v

format:
	clang-format -i include/*hpp
	clang-format -i src/*cpp
	clang-format -i tests/*cpp

lint:
	cpplint --filter=-legal/copyright,-readability/casting,-whitespace/comments,-build/include_subdir \
	  src/*.cpp include/*.hpp

check:
	cppcheck src/*.cpp include/*.hpp
