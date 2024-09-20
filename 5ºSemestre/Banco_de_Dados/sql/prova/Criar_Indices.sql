USE aquario;

ALTER TABLE funcionario
ADD CONSTRAINT fk_funcionario_setores
FOREIGN KEY (setores_id) REFERENCES setores(id_setores);

ALTER TABLE compra
ADD CONSTRAINT fk_compra_funcionario
FOREIGN KEY (funcionario_id) REFERENCES funcionario(id_funcionario),
ADD CONSTRAINT fk_compra_visitante
FOREIGN KEY (visitante_id) REFERENCES visitante(id_visitante),
ADD CONSTRAINT fk_compra_bilhete
FOREIGN KEY (bilhete_id) REFERENCES bilhete(id_bilhete);

ALTER TABLE tanques
ADD CONSTRAINT fk_tanques_setores
FOREIGN KEY (setores_id) REFERENCES setores(id_setores);

ALTER TABLE animais
ADD CONSTRAINT fk_animais_especie
FOREIGN KEY (especie_id) REFERENCES especie(id_especie);

ALTER TABLE contem
ADD CONSTRAINT fk_contem_animais
FOREIGN KEY (animais_id) REFERENCES animais(id_animais),
ADD CONSTRAINT fk_contem_tanques
FOREIGN KEY (tanques_id) REFERENCES tanques(id_tanques);

ALTER TABLE biologo
ADD CONSTRAINT fk_biologo_funcionario
FOREIGN KEY (funcionario_id) REFERENCES funcionario(id_funcionario),
ADD CONSTRAINT fk_biologo_especie
FOREIGN KEY (especie_id) REFERENCES especie(id_especie);

ALTER TABLE cuida
ADD CONSTRAINT fk_cuida_biologo
FOREIGN KEY (biologo_id) REFERENCES biologo(funcionario_id),
ADD CONSTRAINT fk_cuida_animais
FOREIGN KEY (Animais_Id) REFERENCES animais(id_animais);

ALTER TABLE consome
ADD CONSTRAINT fk_consome_animais
FOREIGN KEY (animais_id) REFERENCES animais(id_animais),
ADD CONSTRAINT fk_consome_alimento
FOREIGN KEY (alimento_id) REFERENCES alimento(id_alimento);

ALTER TABLE estoque
ADD CONSTRAINT fk_consome_funcionario
FOREIGN KEY (funcionario_id) REFERENCES funcionario(id_funcionario),
ADD CONSTRAINT fk_consome_alimento_func
FOREIGN KEY (alimento_id) REFERENCES alimento(id_alimento);

ALTER TABLE fornecedor
ADD CONSTRAINT fk_fornecedor_estoque
FOREIGN KEY (estoque_id) REFERENCES estoque(id_estoque);

ALTER TABLE fornece
ADD CONSTRAINT fk_fornece_estoque
FOREIGN KEY (estoque_id) REFERENCES estoque(id_estoque),
ADD CONSTRAINT fk_fornece_fornecedor
FOREIGN KEY (fornecedor_id) REFERENCES fornecedor(id_fornecedor);
