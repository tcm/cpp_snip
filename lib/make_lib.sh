g++ -fPIC -c statfunc.cpp
g++ -shared -o libstatfunc.so statfunc.o
