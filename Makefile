hello:test.cc
	g++ test.cc -o hello -I/usr/bin/third_part/include -L/usr/bin/third_part/lib -lgtest -lgtest_main -lpthread
