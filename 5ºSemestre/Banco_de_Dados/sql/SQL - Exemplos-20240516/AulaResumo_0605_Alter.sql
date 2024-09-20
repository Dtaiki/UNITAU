ALTER TABLE unidades
ADD CONSTRAINT fk_unidade_endereco 
    FOREIGN KEY(un_endereco)
    REFERENCES enderecos (en_id)
    ON DELETE RESTRICT ON UPDATE CASCADE;

ALTER TABLE pessoas
ADD INDEX sk_pe_nome(pe_nome);

ALTER TABLE pessoas
ADD INDEX sk_pe_sexo(pe_sexo);  

ALTER TABLE proprietarios
ALTER pr_data_inicio 
SET DEFAULT CURRENT_DATE();

ALTER TABLE proprietarios
ALTER pr_data_fim 
SET DEFAULT NULL; 

ALTER TABLE proprietarios
ADD CONSTRAINT fk_proprietario_pessoa 
    FOREIGN KEY (pr_pessoa)
    REFERENCES pessoas (pe_id)
    ON DELETE RESTRICT ON UPDATE CASCADE;
    
ALTER TABLE proprietarios
ADD CONSTRAINT fk_proprietario_unidade 
    FOREIGN KEY(pr_unidade)
    REFERENCES unidades (un_id)
    ON DELETE RESTRICT ON UPDATE CASCADE;

ALTER TABLE moradores
ALTER mo_data_inicio 
SET DEFAULT CURRENT_DATE();

ALTER TABLE moradores
ALTER mo_data_fim 
SET DEFAULT NULL; 

ALTER TABLE moradores
ADD CONSTRAINT fk_morador_pessoa 
    FOREIGN KEY (mo_pessoa)
    REFERENCES pessoas (pe_id)
    ON DELETE RESTRICT ON UPDATE CASCADE;
    
ALTER TABLE moradores
ADD CONSTRAINT fk_morador_unidade 
    FOREIGN KEY(mo_unidade)
    REFERENCES unidades (un_id)
    ON DELETE RESTRICT ON UPDATE CASCADE;