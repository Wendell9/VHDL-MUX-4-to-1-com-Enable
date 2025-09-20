# VHDL-MUX-4-to-1-com-Enable
Este projeto implementa um multiplexador (MUX) de 4 para 1 com uma entrada de habilitação (enable). O MUX é capaz de selecionar uma de quatro entradas de 2 bits (A, B, C, D) e roteá-la para uma saída de 2 bits (zout), com base na entrada de seleção de 2 bits (sel). A entrada de habilitação (en) permite ativar ou desativar a operação do MUX.
# MUX 4-to-1 com Habilitação em VHDL

## Visão Geral

Este repositório contém o código VHDL para um multiplexador (MUX) de 4 para 1, projetado para ser implementado em dispositivos Xilinx (FPGA). O MUX possui quatro entradas de 2 bits e uma saída de 2 bits. A seleção da entrada é controlada por um seletor de 2 bits, e a operação do MUX pode ser ativada ou desativada por uma entrada de habilitação (enable).

## Funcionalidades

- **Mux 4-to-1:** Roteia uma das quatro entradas (`A`, `B`, `C`, `D`) para a saída (`zout`).
- **Entradas de 2 bits:** Todas as entradas de dados e a saída são de 2 bits (`STD_LOGIC_VECTOR (1 downto 0)`).
- **Seleção de 2 bits:** A entrada de seleção (`sel`) determina qual entrada de dados será roteada.
    - `"00"`: Seleciona `A`
    - `"01"`: Seleciona `B`
    - `"10"`: Seleciona `C`
    - `"11"`: Seleciona `D`
- **Habilitação (Enable):** A entrada `en` controla a operação do MUX.
    - Se `en` for `'1'`, o MUX opera normalmente, roteando a entrada selecionada para a saída.
    - Se `en` for `'0'`, a saída (`zout`) é colocada em um estado de alta impedância (`"ZZ"`). Isso é útil para aplicações onde a saída precisa ser desconectada do barramento de dados.
- **Caso `others`:** A `case` statement no código VHDL inclui um caso `others` que define a saída como `"00"` caso a entrada de seleção não seja uma das opções válidas.

## Estrutura do Projeto

O projeto é composto pelo seguinte arquivo VHDL:

- **`xilinx_mux.vhd`:** Contém a descrição comportamental do MUX 4-to-1.

### Arquitetura do MUX

A lógica do multiplexador é implementada dentro de um `process` sensível a todas as entradas. A estrutura `if/else` lida com a habilitação, enquanto a `case` statement lida com a seleção das entradas.

```vhdl
if en = '1' then
    case sel is
        when "00" => zout <= A;
        when "01" => zout <= B;
        when "10" => zout <= C;
        when "11" => zout <= D;
        when others => zout <= (others => '0');
    end case;
else
    zout <= (others => 'Z');
end if;
```
### View RTL Schematic
<center>
<img width="330" height="414" alt="{7C063D62-347D-4D27-AF4A-BE3687A2F231}" src="https://github.com/user-attachments/assets/bcdcd188-a1ca-4089-994c-4baccc5e565e" />
</center>
