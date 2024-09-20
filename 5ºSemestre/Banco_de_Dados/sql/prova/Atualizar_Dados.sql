USE aquario;

UPDATE visitante
SET telefone = '99999-8888'
WHERE cpf = '123.456.789-00';

UPDATE bilhete
SET preco = 55.90
WHERE id_bilhete = 1;

UPDATE setores
SET quantidade_tanques = 15
WHERE id_setores = 2;

UPDATE especie
SET temperatura_favorita = 26.50
WHERE id_especie = 3;

UPDATE alimento
SET marca = 'FishNews'
WHERE id_alimento = 4;

UPDATE funcionario
SET salario = 3650.00
WHERE cpf = '987.654.321-00';


UPDATE compra
SET quantidade = 20
WHERE id_compra = 5;


UPDATE tanques
SET ph = 7.8
WHERE id_tanques = 2;


UPDATE animais
SET saude = 'B'
WHERE id_animais = 3;


UPDATE contem
SET quantidade = 10
WHERE id_contem = 4;


UPDATE biologo
SET credencial = 'BIO974536'
WHERE funcionario_id = 2;


UPDATE cuida
SET tratamento = 'Salgar a Ã¡gua'
WHERE id_cuida = 5;


UPDATE consome
SET quantidade_kg = 2.500
WHERE id_consome = 1;


UPDATE estoque
SET preco_unitario = 24.50
WHERE id_estoque = 2;


UPDATE fornecedor
SET telefone = '36861742'
WHERE id_fornecedor = 3;


UPDATE fornece
SET quantidade = 30
WHERE id_fornece = 4;