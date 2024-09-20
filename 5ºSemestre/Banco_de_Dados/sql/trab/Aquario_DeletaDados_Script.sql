SET FOREIGN_KEY_CHECKS = 0;
TRUNCATE TABLE visitante;
TRUNCATE TABLE bilhete;
TRUNCATE TABLE compra;
TRUNCATE TABLE setores;
TRUNCATE TABLE funcionario;
TRUNCATE TABLE tanques;
TRUNCATE TABLE especie;
TRUNCATE TABLE animais;
TRUNCATE TABLE contem;
TRUNCATE TABLE biologo;
TRUNCATE TABLE cuida;
TRUNCATE TABLE alimento;
TRUNCATE TABLE consome;
TRUNCATE TABLE estoque;
TRUNCATE TABLE fornecedor;
TRUNCATE TABLE fornece;

SET FOREIGN_KEY_CHECKS = 1;
ALTER TABLE visitante AUTO_INCREMENT = 1;
ALTER TABLE bilhete AUTO_INCREMENT = 1;
ALTER TABLE compra AUTO_INCREMENT = 1;
ALTER TABLE setores AUTO_INCREMENT = 1;
ALTER TABLE funcionario AUTO_INCREMENT = 1;
ALTER TABLE tanques AUTO_INCREMENT = 1;
ALTER TABLE especie AUTO_INCREMENT = 1;
ALTER TABLE animais AUTO_INCREMENT = 1;
ALTER TABLE contem AUTO_INCREMENT = 1;
ALTER TABLE biologo AUTO_INCREMENT = 1;
ALTER TABLE cuida AUTO_INCREMENT = 1;
ALTER TABLE alimento AUTO_INCREMENT = 1;
ALTER TABLE consome AUTO_INCREMENT = 1;
ALTER TABLE estoque AUTO_INCREMENT = 1;
ALTER TABLE fornecedor AUTO_INCREMENT = 1;
ALTER TABLE fornece AUTO_INCREMENT = 1;