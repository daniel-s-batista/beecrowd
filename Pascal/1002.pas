program areaCirculo;
var raio, area, pi : real;
begin
    pi := 3.14159;
    readln(raio);
    area := sqr(raio) * pi;
    writeln('A=', area:0:4);
end.
