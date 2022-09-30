from cyaron import *

for _ in range(1, 1000000):
    input_io = IO(file_prefix="test")

    maxn = 5
    maxm = 10

    n = 5
    m = 7
    s = randint(1, n)
    input_io.input_writeln(n, m, s)
    graph = Graph.UDAG(n, m, weight_limit=10, repeated_edges=False)

    input_io.input_writeln(graph.to_str(shuffle=True))

    Compare.program("a.exe", input=input_io, std_program="std.exe")
