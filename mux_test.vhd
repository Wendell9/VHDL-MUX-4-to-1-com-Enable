library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL; -- For numeric operations if needed
use IEEE.STD_LOGIC_ARITH.ALL;     -- For numeric operations if needed

entity xilinx_mux_tb is
end xilinx_mux_tb;

architecture behavioral of xilinx_mux_tb is

    -- Component declaration for the Device Under Test (DUT)
    component xilinx_mux
        Port (A, B, C, D : in STD_LOGIC_VECTOR (1 downto 0);
              sel        : in STD_LOGIC_VECTOR (1 downto 0);
              en         : in STD_LOGIC;
              zout       : out STD_LOGIC_VECTOR (1 downto 0));
    end component;

    -- Signals for DUT inputs and outputs
    signal A_tb, B_tb, C_tb, D_tb : STD_LOGIC_VECTOR (1 downto 0);
    signal sel_tb                 : STD_LOGIC_VECTOR (1 downto 0);
    signal en_tb                  : STD_LOGIC;
    signal zout_tb                : STD_LOGIC_VECTOR (1 downto 0);

begin

    -- Instantiate the DUT
    dut_mux : xilinx_mux
        port map (
            A    => A_tb,
            B    => B_tb,
            C    => C_tb,
            D    => D_tb,
            sel  => sel_tb,
            en   => en_tb,
            zout => zout_tb
        );

    -- Stimulus process
    stim_proc : process
    begin
        -- Initialize inputs
        A_tb <= "01";
        B_tb <= "10";
        C_tb <= "11";
        D_tb <= "00";
        en_tb <= '1'; -- Enable the mux

        -- Test case 1: select 'A'
        sel_tb <= "00";
        wait for 10 ns;
        assert zout_tb = "01" report "Test Case 1 failed: Expected A" severity error;

        -- Test case 2: select 'B'
        sel_tb <= "01";
        wait for 10 ns;
        assert zout_tb = "10" report "Test Case 2 failed: Expected B" severity error;

        -- Test case 3: select 'C'
        sel_tb <= "10";
        wait for 10 ns;
        assert zout_tb = "11" report "Test Case 3 failed: Expected C" severity error;

        -- Test case 4: select 'D'
        sel_tb <= "11";
        wait for 10 ns;
        assert zout_tb = "00" report "Test Case 4 failed: Expected D" severity error;

        -- Test case 5: disabled
        en_tb <= '0'; -- Disable the mux
        wait for 10 ns;
        assert zout_tb = "ZZ" report "Test Case 5 failed: Expected 'Z'" severity error;

        -- Report completion and stop simulation
        report "Simulation finished successfully." severity note;
        wait; -- Will wait forever, stopping the simulation
    end process;

end behavioral;