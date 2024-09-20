USE aquario;

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Visitantes_Table.txt'
INTO TABLE visitante
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(nome, cpf, idade, telefone, email);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Bilhetes_Table.txt'
INTO TABLE bilhete
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(tipo_bilhete, preco, data_hora_compra);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Compras_Table.txt'
INTO TABLE compra
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(quantidade, hora_compra, dia_compra, visitante_id, bilhete_id);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Setores_Table.txt'
INTO TABLE setores
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(nome, descrição, quantidade_tanques);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Funcionario_Table.txt'
INTO TABLE funcionario
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(nome, cpf, telefone, endereço, email, salario, cargo, bilhete_id, setores_id);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Tanques_Table.txt'
INTO TABLE tanques
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(n_do_tanque, tamanho, tipo_de_agua, ph, setores_id);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Especie_Table.txt'
INTO TABLE especie
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(nome_cientifico, famila, habitat, dieta, especie_id, temperatura_favorita);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Animais_Table.txt'
INTO TABLE animais
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(nome, sexo, data_nascimento, saude, especie_id);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Contem_Table.txt'
INTO TABLE contem
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(quantidade, animais_id, tanques_id);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Biologo_Table.txt'
INTO TABLE biologo
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(credencial, funcionario_id, especie_id);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Cuida_Table.txt'
INTO TABLE cuida
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(tratamento, biologo_id, Animais_Id);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Alimento_Table.txt'
INTO TABLE alimento
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(nome, composição, marca);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Consome_Table.txt'
INTO TABLE consome
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(quantidade_kg, animais_id, alimento_id);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Estoque_Table.txt'
INTO TABLE estoque
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(nome_produto, quantidade, preco_unitario, data_entrada, categoria, funcionario_id, alimento_id);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Fornecedor_Table.txt'
INTO TABLE fornecedor
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(nome, telefone, email, produto, estoque_id);

LOAD DATA
INFILE 'C:\\Users\\ukita\\OneDrive\\Imagens\\unitau semestre\\banco de dados 1\\trab\\Tabelas\\Fornece_Table.txt'
INTO TABLE fornece
FIELDS TERMINATED BY ','
LINES TERMINATED BY ';'
(produto, quantidade, preco, estoque_id, fornecedor_id);