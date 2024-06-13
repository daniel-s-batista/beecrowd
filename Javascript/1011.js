var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let raio = parseInt(lines);
console.log("VOLUME =", ((4.0 / 3) * 3.14159 * raio ** 3).toFixed(3));
