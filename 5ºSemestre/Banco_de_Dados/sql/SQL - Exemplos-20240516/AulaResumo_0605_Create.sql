CREATE DATABASE IF NOT EXISTS condominio;

USE condominio;

CREATE TABLE IF NOT EXISTS unidades(
   un_id SMALLINT UNSIGNED,
   un_endereco TINYINT UNSIGNED,
   un_numero SMALLINT UNSIGNED,
   PRIMARY KEY(un_id)
)ENGINE=INNODB;

CREATE TABLE IF NOT EXISTS enderecos(
   en_id TINYINT UNSIGNED,
   en_nome_rua VARCHAR(50),
   PRIMARY KEY(en_id)
)ENGINE=INNODB;

CREATE TABLE IF NOT EXISTS pessoas(
   pe_id INT UNSIGNED,
   pe_nome VARCHAR(40),
   pe_sexo CHAR(1) DEFAULT 'M',
   PRIMARY KEY(pe_id)
)ENGINE=INNODB;  

CREATE TABLE IF NOT EXISTS proprietarios(
   pr_pessoa INT UNSIGNED,
   pr_unidade SMALLINT UNSIGNED,
   pr_data_inicio DATE,
   pr_data_fim DATE,
   PRIMARY KEY(pr_pessoa,pr_unidade)
)ENGINE=INNODB; 

CREATE TABLE IF NOT EXISTS moradores(
   mo_pessoa INT UNSIGNED,
   mo_unidade SMALLINT UNSIGNED,
   mo_data_inicio DATE,
   mo_data_fim DATE,
   PRIMARY KEY(mo_pessoa,mo_unidade)
)ENGINE=INNODB;
   