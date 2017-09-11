
.PHONY: all deps build test clean

all: deps build test

deps:
	if [ ! -d "mruby" ]; then git clone git@github.com:mruby/mruby.git; fi

build:
	cd mruby; MRUBY_CONFIG=../misc/test_config.rb ./minirake; cd ..

test:
	cd mruby; MRUBY_CONFIG=../misc/test_config.rb ./minirake test; cd ..

clean:
	rm -rf mruby
