var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');

let A = parseInt(lines.shift());
let B = parseInt(lines.shift());
let C = parseInt(lines.shift());
let maior_ab = (A + B + Math.abs(A - B)) / 2;
let maior = (C + maior_ab + Math.abs(C - maior_ab)) / 2;
console.log(maior, "eh o maior");
