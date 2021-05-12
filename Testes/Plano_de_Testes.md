## Estratégia

Vamos seguir a estratégia básica de testes:

1. Teste de Unidade
2. Teste de Integração
3. Teste de Validação
4. Teste de Sistema

## Etapas

-  **Teste de Unidade**

   -  Teste Estrutural
   -  Teste Funcional

-  **Teste de Integração**

   -  Teste de Estresse
      -  _Otimizador_
   -  Teste de Carga
      -  _Acompanhamento da progressaõ (API)_

-  **Teste de Validação**

   -  Teste Estrutural
   -  Teste Funcional

-  **Teste de Sistema**
   -  Teste Estrutural
   -  Teste Funcional
   -  Teste de Usabilidade
      -  _facilidade de navegação_
      -  _facilidade de reconhecimento das informações_
      -  _facilidade de usabilidade das funções do software_

## Técnicas de Teste

-  **Teste de Carga**: O teste de carga é uma técnica usada para avaliar os limites operacionais do software. Geralmente, as medições são tomadas com base na taxa de transferência de dados da carga de trabalho e no tempo de resposta da transação. As variações na carga de trabalho normalmente incluem a emulação das cargas de trabalho médias e máximas que ocorrem dentro de tolerâncias operacionais normais. A aplicação dessa técnica é indicada durante as fases de testes de integração e de sistema.

-  **Teste de Estresse**: O teste de estresse é destinado a avaliar como o sistema responde em condições anormais. Basicamente, é um teste de carga abrangendo cargas de trabalho extremas, memória insuficiente, hardware e serviços indisponíveis ou recursos compartilhados limitados. Normalmente, esses testes são executados para compreender melhor como e em quais áreas o sistema será dividido, para que os planos de contingência e a manutenção de atualização possam ser planejados com bastante antecedência. A utilização dessa técnica é imprescindível para projetos que desenvolvam sistemas críticos, que necessitem de alta eficiência e disponibilidade. A aplicação dessa técnica é indicada durante a fase de teste de sistema.

-  **Teste de Usabilidade**: O teste de usabilidade é uma técnica que visa avaliar o sistema do ponto de vista do usuário final. Nesse teste vários fatores são levados em consideração, dentre eles: os fatores humanos, a estética, os manuais, a facilidade de uso, etc. Esses testes permitem identificar problemas de usabilidade e observar o comportamento dos usuários durante a utilização do sistema, por isso são testes realizados na fase de testes de aceitação.

-  **Teste Funcional (caixa-preta)**: O teste funcional, ou de caixa-preta, é baseado nos requisitos funcionais do software. Esta técnica não está preocupada com o comportamento interno do sistema durante a execução do teste, mas sim com a saída gerada após a entrada dos dados especificados. Tal tipo de teste é indicado para detectar erros de interface, de comportamento e/ou desempenho, podendo ser aplicada em todas as fases de testes (unidade, integração, sistema e aceitação). Uma dificuldade dessa técnina, por questões de tempo e recurso, é testar todas as entradas possíveis. Essa técnica de teste apresenta-se como necessária durante o desenvolvimento de um sistema, contudo, por sua natureza, mostra-se insuficiente para identificar certos riscos num projeto de software.

-  **Teste Estrutural (caixa-branca)**: O teste estrutural, ou de caixa-branca, é projetado em função da estrutura interna do sistema, e por isso permite uma verificação mais precisa do funcionamento do software. Este tipo de teste é desenvolvido analisando o código-fonte e elaborando casos de teste que cubram as funcionalidades do componente de software. Essa técnica é vista como complementar à técnica funcional e informações obtidas pela aplicação desses critérios têm sido consideradas relevantes para as atividades de manutenção, depuração e para a confiabilidade de software. A técnica de teste de caixa-branca é recomendada para as fases de teste de unidade e teste de integração, cuja responsabilidade principal fica a cargo dos desenvolvedores do sistema, que por sua vez conhecem bem o código produzido.
