CREATE DATABASE IF NOT EXISTS aquario;

USE aquario;

CREATE TABLE IF NOT EXISTS visitante (
    id_visitante INT UNSIGNED UNIQUE AUTO_INCREMENT,
    nome VARCHAR(50),
    cpf VARCHAR(14) NOT NULL UNIQUE,
    idade TINYINT UNSIGNED,
    telefone VARCHAR(15),
    email VARCHAR(75),
    PRIMARY KEY(id_visitante)
);

CREATE TABLE IF NOT EXISTS bilhete (
    id_bilhete INT UNSIGNED UNIQUE AUTO_INCREMENT,
    tipo_bilhete VARCHAR(20) NOT NULL,
    preco DECIMAL(10,2) NOT NULL,
    data_hora_compra DATETIME,
    PRIMARY KEY(id_bilhete)
);

CREATE TABLE IF NOT EXISTS setores (
    id_setores INT UNSIGNED UNIQUE AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    descrição VARCHAR(50),
    quantidade_tanques INT UNSIGNED,
    PRIMARY KEY(id_setores)
);

CREATE TABLE IF NOT EXISTS especie (
    id_especie INT UNSIGNED UNIQUE AUTO_INCREMENT,
    nome_cientifico VARCHAR(75) NOT NULL,
    famila VARCHAR(75) NOT NULL,
    habitat VARCHAR(75) NOT NULL,
    dieta VARCHAR(10) NOT NULL,
    especie_id INT UNSIGNED NOT NULL,
    temperatura_favorita DECIMAL(5,2),
    PRIMARY KEY(id_especie)
);

CREATE TABLE IF NOT EXISTS alimento (
    id_alimento INT UNSIGNED UNIQUE AUTO_INCREMENT,
    nome VARCHAR(75) NOT NULL,
    composição VARCHAR(150) NOT NULL,
    marca VARCHAR(50)
);

CREATE TABLE IF NOT EXISTS funcionario (
    id_funcionario INT UNSIGNED UNIQUE AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    cpf VARCHAR(14) UNIQUE NOT NULL,
    telefone VARCHAR(20) UNIQUE NOT NULL,
    endereço VARCHAR(150) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    salario DECIMAL(10,2) NOT NULL,
    cargo VARCHAR(50) NOT NULL,
    setores_id INT UNSIGNED NOT NULL,
    PRIMARY KEY(id_funcionario)
);

CREATE TABLE IF NOT EXISTS compra (
    id_compra INT UNSIGNED UNIQUE AUTO_INCREMENT,
    quantidade SMALLINT UNSIGNED NOT NULL,
    hora_compra TIME,
    dia_compra DATE,
    funcionario_id  INT UNSIGNED NOT NULL,
    visitante_id INT UNSIGNED NOT NULL,
    bilhete_id INT UNSIGNED NOT NULL,
    PRIMARY KEY(id_compra)
);

CREATE TABLE IF NOT EXISTS tanques (
    id_tanques INT UNSIGNED UNIQUE AUTO_INCREMENT,
    n_do_tanque TINYINT UNIQUE NOT NULL,
    tamanho FLOAT UNSIGNED,
    tipo_de_agua CHAR(1) NOT NULL,
    ph FLOAT UNSIGNED NOT NULL,
    setores_id INT UNSIGNED NOT NULL,
    PRIMARY KEY(id_tanques)
);

CREATE TABLE IF NOT EXISTS animais (
    id_animais INT UNSIGNED UNIQUE AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    sexo CHAR(1) NOT NULL,
    data_nascimento DATE,
    saude CHAR(1) NOT NULL,
    especie_id INT UNSIGNED NOT NULL,
    PRIMARY KEY(id_animais)
);

CREATE TABLE IF NOT EXISTS contem (
    id_contem INT UNSIGNED UNIQUE AUTO_INCREMENT,
    quantidade TINYINT UNSIGNED,
    animais_id INT UNSIGNED NOT NULL,
    tanques_id INT UNSIGNED NOT NULL,
    PRIMARY KEY(id_contem)
);

CREATE TABLE IF NOT EXISTS biologo (
    credencial VARCHAR(50) UNIQUE,
    funcionario_id INT UNSIGNED NOT NULL,
    especie_id INT UNSIGNED NOT NULL
);

CREATE TABLE IF NOT EXISTS cuida (
    id_cuida INT UNSIGNED UNIQUE AUTO_INCREMENT,
    tratamento VARCHAR(100) NOT NULL,
    biologo_id INT UNSIGNED NOT NULL,
    Animais_Id INT UNSIGNED NOT NULL,
    PRIMARY KEY(id_cuida)
);

CREATE TABLE IF NOT EXISTS consome (
    id_consome INT UNSIGNED UNIQUE AUTO_INCREMENT,
    quantidade_kg DECIMAL(5,3) NOT NULL,
    animais_id INT UNSIGNED NOT NULL,
    alimento_id INT UNSIGNED NOT NULL,
    PRIMARY KEY(id_consome)
);

CREATE TABLE IF NOT EXISTS estoque (
    id_estoque INT UNSIGNED UNIQUE AUTO_INCREMENT,
    nome_produto VARCHAR(75) NOT NULL,
    quantidade INT UNSIGNED NOT NULL,
    preco_unitario DECIMAL(10,2) NOT NULL,
    data_entrada DATE,
    categoria VARCHAR(50),
    funcionario_id INT UNSIGNED NOT NULL,
    alimento_id INT UNSIGNED NOT NULL,
    PRIMARY KEY(id_estoque)
);

CREATE TABLE IF NOT EXISTS fornecedor (
    id_fornecedor INT UNSIGNED UNIQUE AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    telefone VARCHAR(15) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    produto VARCHAR(100),
    estoque_id INT UNSIGNED NOT NULL,
    PRIMARY KEY(id_fornecedor)
);

CREATE TABLE IF NOT EXISTS fornece (
    id_fornece INT UNSIGNED UNIQUE AUTO_INCREMENT,
    produto VARCHAR(75) NOT NULL,
    quantidade SMALLINT UNSIGNED NOT NULL,
    preco DECIMAL(10,2) NOT NULL,
    estoque_id INT UNSIGNED NOT NULL,
    fornecedor_id INT UNSIGNED NOT NULL,
    PRIMARY KEY(id_fornece)
);