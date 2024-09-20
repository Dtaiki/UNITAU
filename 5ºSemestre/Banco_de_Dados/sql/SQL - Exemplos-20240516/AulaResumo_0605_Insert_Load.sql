INSERT INTO enderecos
VALUES (10,"Rua 1"),
       (20,"Rua 2"),
       (30,"Rua 3"),
       (40,"Rua 4"),
       (50,"Rua 5");
       
INSERT INTO unidades
VALUES (1,10,10),
       (2,10,21),
       (3,10,33),
       (4,10,42),
       (5,20,10),
       (6,20,22),
       (7,20,37),
       (8,20,61);

INSERT INTO enderecos
VALUES (10,"Rua 1"),
       (20,"Rua 2"),
       (30,"Rua 3"),
       (40,"Rua 4"),
       (50,"Rua 5");

LOAD DATA 
  INFILE "D:\\Aulas\\UNITAU\\Banco de Dados I\\Aulas\\pessoas.txt"
  INTO TABLE pessoas
  FIELDS  TERMINATED BY ','
  LINES TERMINATED BY '\n'
  (pe_id,pe_nome);
  
LOAD DATA 
  INFILE "D:\\Aulas\\UNITAU\\Banco de Dados I\\Aulas\\proprietarios.txt"
  INTO TABLE proprietarios
  FIELDS  TERMINATED BY ','
  LINES TERMINATED BY ';'
  (pr_pessoa,pr_unidade);

LOAD DATA 
  INFILE "D:\\Aulas\\UNITAU\\Banco de Dados I\\Aulas\\moradores.txt"
  INTO TABLE moradores
  FIELDS  TERMINATED BY ';'
  LINES TERMINATED BY ','
  (mo_pessoa,mo_unidade);