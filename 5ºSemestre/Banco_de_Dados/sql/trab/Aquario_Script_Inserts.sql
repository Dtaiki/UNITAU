USE aquario;

INSERT INTO visitante (nome, cpf, idade, telefone, email)
VALUES
('João Silva', '123.456.789-00', 30, '12345-6789', 'joao.silva@example.com'),
('Maria Oliveira', '987.654.321-00', 25, '98765-4321', 'maria.oliveira@example.com'),
('Pedro Santos', '111.222.333-44', 28, '11122-3344', 'pedro.santos@example.com'),
('Ana Costa', '555.666.777-88', 22, '55566-7788', 'ana.costa@example.com'),
('Lucas Almeida', '999.888.777-66', 35, '99988-7766', 'lucas.almeida@example.com');

INSERT INTO bilhete (tipo_bilhete, preco, data_hora_compra)
VALUES
('Adulto', 50.00, '2024-05-18 10:00:00'),
('Criança', 25.00, '2024-05-18 11:00:00'),
('Estudante', 35.00, '2024-05-18 12:00:00'),
('Idoso', 30.00, '2024-05-18 13:00:00'),
('VIP', 100.00, '2024-05-18 14:00:00');

INSERT INTO setores (nome, descrição, quantidade_tanques)
VALUES
('Setor de Água Doce', 'Tanques com peixes de água doce', 10),
('Setor de Água Salgada', 'Tanques com peixes de água salgada', 8),
('Setor de Répteis', 'Tanques com répteis aquáticos', 5),
('Setor de Anfíbios', 'Tanques com anfíbios', 3),
('Setor de Plantas Aquáticas', 'Tanques com plantas aquáticas', 6);

INSERT INTO especie (nome_cientifico, famila, habitat, dieta, especie_id, temperatura_favorita)
VALUES
('Pterophyllum scalare', 'Cichlidae', 'Rio Amazonas', 'Onívora', 1, 28.5),
('Paracheirodon axelrodi', 'Characidae', 'Rio Negro', 'Onívora', 2, 26.0),
('Astronotus ocellatus', 'Cichlidae', 'Rio Amazonas', 'Carnívora', 3, 25.0),
('Trachemys scripta', 'Emydidae', 'Pântanos e lagos', 'Onívora', 4, NULL),
('Dendrobates tinctorius', 'Dendrobatidae', 'Florestas tropicais', 'Carnívora', 5, NULL);

INSERT INTO alimento (nome, composição, marca)
VALUES
('Ração para peixes', 'Farinha de peixe, farelo de trigo, vitaminas', 'FishCare'),
('Alimentos congelados', 'Camarão, mexilhão, lula', 'SeaFresh'),
('Insetos vivos', 'Grilos, tenébrios, baratas', 'BugMaster'),
('Vegetais frescos', 'Alface, espinafre, cenoura', 'FarmFresh'),
('Ração para répteis', 'Ratos, insetos, vegetais', 'ReptiCare');

INSERT INTO funcionario (nome, cpf, telefone, endereço, email, salario, cargo, setores_id)
VALUES
('João Silva', '111.222.333-44', '123456789', 'Rua A, 123', 'joao.silva@example.com', 3000.00, 'Atendente', 1),
('Maria Oliveira', '222.333.444-55', '987654321', 'Rua B, 456', 'maria.oliveira@example.com', 3500.00, 'Supervisor', 2),
('Pedro Santos', '333.444.555-66', '111222333', 'Rua C, 789', 'pedro.santos@example.com', 4000.00, 'Gerente', 3),
('Ana Costa', '444.555.666-77', '555666777', 'Rua D, 1011', 'ana.costa@example.com', 3200.00, 'Atendente', 4),
('Lucas Almeida', '555.666.777-88', '999888777', 'Rua E, 1213', 'lucas.almeida@example.com', 3800.00, 'Técnico', 5);

INSERT INTO compra (quantidade, hora_compra, dia_compra, funcionario_id, visitante_id, bilhete_id)
VALUES
(2, '10:30:00', '2024-05-18', 1, 1, 1),
(1, '11:15:00', '2024-05-18', 2, 2, 2),
(4, '12:00:00', '2024-05-18', 3, 3, 3),
(3, '13:45:00', '2024-05-18', 4, 4, 4),
(1, '14:30:00', '2024-05-18', 5, 5, 5);

INSERT INTO tanques (n_do_tanque, tamanho, tipo_de_agua, ph, setores_id)
VALUES
(1, 10.5, 'D', 7.2, 1),
(2, 8.2, 'S', 8.0, 1),
(3, 15.0, 'D', 6.8, 2),
(4, 12.5, 'S', 8.2, 2),
(5, 20.0, 'D', 7.0, 3);

INSERT INTO animais (nome, sexo, data_nascimento, saude, especie_id)
VALUES
('Rex', 'M', '2023-02-15', 'S', 1),
('Ariel', 'F', '2022-11-20', 'S', 2),
('Bubbles', 'F', '2023-05-10', 'S', 3),
('Leonardo', 'M', '2024-01-03', 'S', 4),
('Tiana', 'F', '2023-07-08', 'S', 5);

INSERT INTO contem (quantidade, animais_id, tanques_id)
VALUES
(5, 1, 1),
(3, 2, 2),
(7, 3, 3),
(2, 4, 4),
(4, 5, 5);

INSERT INTO biologo (credencial, funcionario_id, especie_id)
VALUES
('BIO123', 1, 1),
('BIO456', 2, 2),
('BIO789', 3, 3),
('BIO101', 4, 4),
('BIO112', 5, 5);

INSERT INTO cuida (tratamento, biologo_id, Animais_Id)
VALUES
('Check-up regular', 1, 1),
('Dieta especial', 2, 2),
('Fisioterapia', 3, 3),
('Tratamento para infecção', 4, 4),
('Monitoramento de reprodução', 5, 5);

INSERT INTO consome (quantidade_kg, animais_id, alimento_id)
VALUES
(0.5, 1, 1),
(1.2, 2, 2),
(0.8, 3, 3),
(0.3, 4, 4),
(0.6, 5, 5);

INSERT INTO estoque (nome_produto, quantidade, preco_unitario, data_entrada, categoria, funcionario_id, alimento_id)
VALUES
('Ração para peixes', 100, 50.00, '2024-05-18', 'Alimentos', 1, 1),
('Alimentos congelados', 50, 100.00, '2024-05-18', 'Alimentos', 2, 2),
('Insetos vivos', 200, 20.00, '2024-05-18', 'Alimentos', 3, 3),
('Vegetais frescos', 150, 30.00, '2024-05-18', 'Alimentos', 4, 4),
('Ração para répteis', 80, 40.00, '2024-05-18', 'Alimentos', 5, 5);

INSERT INTO fornecedor (nome, telefone, email, produto, estoque_id)
VALUES
('Fish Supplies Ltda.', '123456789', 'fishsupplies@example.com', 'Ração para peixes', 1),
('Seafood Co.', '987654321', 'seafood@example.com', 'Alimentos congelados', 2),
('Bug Farm', '111222333', 'bugfarm@example.com', 'Insetos vivos', 3),
('Farm Fresh', '555666777', 'farmfresh@example.com', 'Vegetais frescos', 4),
('ReptiCare', '999888777', 'repticare@example.com', 'Ração para répteis', 5);

INSERT INTO fornece (produto, quantidade, preco, estoque_id, fornecedor_id)
VALUES
('Ração para peixes', 100, 40.00, 1, 1),
('Alimentos congelados', 50, 90.00, 2, 2),
('Insetos vivos', 200, 15.00, 3, 3),
('Vegetais frescos', 150, 25.00, 4, 4),
('Ração para répteis', 80, 35.00, 5, 5);