from cyaron import *

for _ in range(1, 1000000):
    input_io = IO(file_prefix="test")

    n = 100
    q = 100

    input_io.input_writeln(n, q)
    for i in range(n):
        input_io.input_write(randint(1, n))
    input_io.input_write("\n")

    for i in range(q):
        query = randint(1, 2);
        x = 2
        y = 1
        while x > y:
            x = randint(1, n)
            y = randint(1, n)
        if query == 1:
            d = randint(1, n)
            input_io.input_writeln(query, x, y, d)
        else:
            input_io.input_writeln(query, x, y)
    print(input_io.input_file.readable())
    Compare.program("b.exe", input=input_io, std_program="std.exe")
