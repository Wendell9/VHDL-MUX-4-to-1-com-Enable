library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity xilinx_mux is
    Port ( 
        A, B, C, D : in  STD_LOGIC_VECTOR (1 downto 0); -- The four 2-bit input ports
        sel        : in  STD_LOGIC_VECTOR (1 downto 0); -- The 2-bit select signal
        en         : in  STD_LOGIC;                    -- The enable signal (input)
        zout       : out STD_LOGIC_VECTOR (1 downto 0) -- The 2-bit output port
    );
end xilinx_mux;

architecture Behavioral of xilinx_mux is
begin

    process(A, B, C, D, sel, en)
    begin
        if en = '1' then
            case sel is
                when "00" => 
                    zout <= A; 
                when "01" => 
                    zout <= B; 
                when "10" => 
                    zout <= C; 
                when "11" => 
                    zout <= D;
                when others => 
                    zout <= (others => '0'); -- Default to all '0's
            end case;
        else
            zout <= (others => 'Z'); -- High-impedance state when disabled
        end if;
    end process;
end Behavioral;