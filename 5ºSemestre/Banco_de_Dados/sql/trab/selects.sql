USE aquario;

SELECT * FROM visitante;
SELECT * FROM tanques;
SELECT * FROM especie;
SELECT * FROM animais;
SELECT * FROM contem;
SELECT * FROM biologo;
SELECT * FROM cuida;
SELECT * FROM alimento;
SELECT * FROM consome;
SELECT * FROM estoque;


SELECT idade, COUNT(*) AS total_visitantes_por_idade
FROM visitante
GROUP BY idade;

SELECT CASE
	WHEN idade <= 18 THEN 'Menor ou igual a 18'
	WHEN idade <= 30 THEN '19-30'
	WHEN idade <= 40 THEN '31-40'
	ELSE 'Maior que 40'
	END AS faixa_etaria,
COUNT(*) AS total_visitantes_por_faixa_etaria
FROM visitante
GROUP BY faixa_etaria;

SELECT famila, COUNT(*) AS total_especies_por_familia
FROM especie
GROUP BY famila;

SELECT famila, AVG(temperatura_favorita) AS temperatura_media_por_familia
FROM especie
GROUP BY famila;

SELECT categoria, AVG(preco_unitario) AS preco_unitario_medio_por_categoria
FROM estoque
GROUP BY categoria;


SELECT 
f.nome AS nome_fornecedor,
f.produto AS produto_fornecido,
ff.quantidade,
ff.preco
FROM fornecedor f
JOIN fornece ff ON f.id_fornecedor = ff.fornecedor_id;

SELECT 
f.nome AS nome_fornecedor,
f.telefone AS telefone_fornecedor,
f.email AS email_fornecedor,
ff.produto,
ff.quantidade,
ff.preco
FROM fornecedor f
JOIN fornece ff ON f.id_fornecedor = ff.fornecedor_id;

SELECT 
a.nome AS nome_animal,
a.sexo,
a.data_nascimento,
a.saude,
e.nome_cientifico AS especie_nome_cientifico,
e.famila AS especie_familia,
e.habitat AS especie_habitat,
e.dieta AS especie_dieta,
e.temperatura_favorita AS especie_temperatura_favorita
FROM animais a
JOIN especie e ON a.especie_id = e.id_especie;

SELECT 
a.nome AS nome_animal,
a.sexo,
a.data_nascimento,
a.saude,
t.n_do_tanque,
t.tamanho,
t.tipo_de_agua,
t.ph
FROM animais a
JOIN tanques t ON a.id_animais = t.id_tanques;


SELECT t.n_do_tanque, COUNT(a.id_animais) AS quantidade_animais
FROM tanques t
LEFT JOIN animais a ON t.id_tanques = a.id_animais
GROUP BY t.n_do_tanque;

SELECT t.tipo_de_agua, AVG(t.ph) AS ph_medio
FROM tanques t
JOIN animais a ON t.id_tanques = a.id_animais
GROUP BY t.tipo_de_agua;

SELECT t.n_do_tanque, a.sexo, GROUP_CONCAT(a.nome) AS animais_no_tanque
FROM tanques t
JOIN animais a ON t.id_tanques = a.id_animais
GROUP BY t.n_do_tanque, a.sexo;
