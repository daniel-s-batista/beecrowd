var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let dias = parseInt(lines.shift());
let meses = 0;
let anos = 0;
for (anos = 0; dias >= 365; anos++)
    dias -= 365;
for (meses = 0; dias >= 30; meses++)
    dias -= 30;
console.log(anos, "ano(s)\n" + meses, "mes(es)\n" + dias, "dia(s)");
