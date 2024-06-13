var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
// Como .sort() organiza os valores com base em ordem alfabética,
// precisei fazer uma função para fazer isso em ordem numérica
function sort_numerico(a, b) {
    return a - b;
}

function str_para_int(string) {
    return parseInt(string);
}

let num = lines.shift().trim().split(' ').map(str_para_int);
let ord = [...num];
let TF = num.length;
ord.sort(sort_numerico);
for (i = 0; i < TF; i++)
    console.log(ord[i]);
console.log();
for (i = 0; i < TF; i++)
    console.log(num[i]);
