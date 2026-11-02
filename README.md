# IBB FIAE FI-ITS-CySy

## Intro
Este repositório reúne exercícios introdutórios de sistemas ciberfísicos.
Os exemplos atuais usam Arduino e circuitos simulados no Wokwi.
Cada pasta representa um projeto independente.
Os exercícios começam com o LED integrado da placa.
Depois, incluem LEDs externos conectados a pinos digitais.
O exemplo de semáforo amplia a prática com vários LEDs.
Os arquivos `.ino` contêm o código Arduino de cada atividade.
Os arquivos `diagram.json` descrevem os circuitos simulados.
Os arquivos `wokwi-project.txt` apontam para os projetos no Wokwi.
Abra uma pasta de exercício para explorar seus arquivos.
Use os exemplos como material de estudo e adapte-os com cuidado.

## About Wokwi
Wokwi é um simulador online de eletrônica e microcontroladores.
Ele permite montar circuitos e executar código em um navegador.
É possível experimentar sem conectar componentes físicos.
Os projetos podem incluir placas, LEDs, resistores e fios virtuais.
O simulador mostra o comportamento do circuito durante a execução.
Isso ajuda a testar ideias antes de montar o circuito real.
Cada exercício deste repositório inclui um diagrama de circuito.
Os links nos arquivos de projeto podem abrir a simulação correspondente.
Confira as conexões no diagrama quando o resultado for inesperado.
Consulte a documentação oficial do Wokwi para recursos atualizados.

## Wokwi Library
O Wokwi oferece modelos de placas e componentes para os circuitos.
Cada componente tem um identificador de tipo, como `wokwi-led`.
Os componentes aparecem no `diagram.json` dentro da lista `parts`.
Os atributos definem detalhes como a cor de um LED.
As conexões ligam os pinos da placa aos terminais dos componentes.
Os exemplos de LEDs deste repositório não precisam de bibliotecas externas.
No Arduino, bibliotecas de software adicionam suporte a dispositivos ou funções.
Quando necessárias, inclua a biblioteca apropriada no código com `#include`.
Verifique se ela está disponível no ambiente de compilação usado pelo projeto.
Não confunda uma biblioteca de código com um componente do diagrama.

## Read JSON File
Para ler o diagrama, abra a pasta do exercício no Visual Studio Code.
No Explorer, clique com o botão direito em `diagram.json`.
Escolha **Open** ou **Open With** para abrir o arquivo como texto.
Também é possível abrir a pasta no editor Wokwi para ver o desenho do circuito.
O arquivo usa JSON, um formato de texto estruturado por chaves e listas.
A lista `parts` contém as placas e os componentes do circuito.
Cada componente tem um `type` e um identificador `id` exclusivo.
Os valores `top` e `left` controlam a posição visual do componente.
O campo `rotate` define a rotação, e `attrs` guarda propriedades do componente.
A lista `connections` registra os pinos ligados e a aparência dos fios.
Altere posições para organizar o desenho sem mudar as ligações elétricas.
Para adicionar peças ou fios, prefira os controles visuais do editor Wokwi.
Se editar o JSON diretamente, preserve aspas, vírgulas, colchetes e chaves.
Use IDs únicos e confira os nomes dos pinos ao modificar conexões.
Salve e reabra a simulação para identificar erros de sintaxe ou ligação.

## About the Author
Lorem ipsum dolor sit amet, consectetur adipiscing elit.
Sed do eiusmod tempor incididunt ut labore et dolore magna
aliqua, ut enim ad minim veniam, quis nostrud
exercitation ullamco laboris
nisi ut aliquip ex ea commodo consequat.
Duis aute irure dolor
in reprehenderit in voluptate velit esse
cillum dolore eu fugiat nulla pariatur.
Excepteur sint occaecat cupidatat non proident,
sunt in culpa qui officia deserunt mollit anim id est laborum.
