CFLAGS = -std=c++17 -O2
LDFLAGS = -lraylib -lGL -lm -lpthread -ldl -lX11

game:
	g++ -std=c++17 *.cpp core/*.cpp renderer/*.cpp -Iinclude -Icore -Isystems -Irenderer -I/include -O2 -o build/game $(LDFLAGS)

test: game
	./build/game

clean:
	rm -f build/game