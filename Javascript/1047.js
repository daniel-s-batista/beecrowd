var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');

function minutos(m1, m2) {
    if (m1 < m2)
        return m2 - m1;
    else if (m1 > m2)
        return (60 - m1) + m2;
    else return 0;
}

let hi = parseInt(lines.shift());
let mi = parseInt(lines.shift());
let hf = parseInt(lines.shift());
let mf = parseInt(lines.shift());
let ht = 0;
let mt = 0;
if (hi < hf) {
    ht = hf - hi;
    if (mi > mf)
        ht--;
    mt = minutos(mi, mf);
}
else if (hi > hf) {
    ht = (24 - hi) + hf;
    if (mi > mf)
        ht--;
    mt = minutos(mi, mf);
}
else {
    if (mi < mf) {
        ht = 0;
        mt = minutos(mi, mf);
    }
    else if (mi > mf) {
        ht = 23;
        mt = minutos(mi, mf);
    }
    else {
        ht = 24;
        mt = 0;
    }
}
console.log("O JOGO DUROU", ht, "HORA(S) E", mt, "MINUTO(S)");
