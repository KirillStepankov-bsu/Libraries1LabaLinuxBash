c++ -c Number/number.cpp -fpic -o Number/libnumber.o
ar rvs Number/libnumber.a Number/libnumber.o

c++ -c Vector/Vector.cpp -INumber -fpic -o Vector/libvector.o
c++ -shared Vector/libvector.o Number/libnumber.a -o Vector/libvector.so
c++ -c Client/main.cpp -INumber -IVector -o Client/main.o

c++ -o Client/main Client/main.o Number/libnumber.a Vector/libvector.so

./Client/main

