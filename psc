PROGRAM cek_kelulusan;
USES crt;

// deklarasi prosedur
PROCEDURE cek_lulus(nilai: integer);
BEGIN
  IF (nilai >= 60) THEN
    writeln('Selamat, Anda lulus!')
  ELSE
    writeln('Maaf, Anda tidak lulus.')
END;

// program utama
VAR
  nilai: integer;
BEGIN
  clrscr;
  write('Masukkan nilai Anda: ');
  readln(nilai);
  cek_lulus(nilai);
  readln;
END.
