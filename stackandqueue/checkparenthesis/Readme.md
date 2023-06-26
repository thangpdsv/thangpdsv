Cho chuỗi chỉ chứa các dấu '(', ')', '{', '}', '[' và ']'

Hãy kiểm tra xem các dấu ngoặc này có khớp với nhau hay không. Các dấu ngoặc khớp nhau nếu chúng đóng và mở theo đúng cặp "()[]{}".  Các trường hợp như  "(]" hay "([)]"  là không khớp nhau

# INPUT
Input có nhiều dòng, mỗi dòng là một chuỗi cần kiểm tra. Input kết thúc bằng một dòng chứa chuỗi END

# OUTPUT
Ứng với mỗi dòng cần kiểm tra xuất ra trên một dòng chữ TRUE nếu các dấu ngoặc trong chuỗi khớp nhau và FALSE nếu chúng không khớp nhau.

# VÍ DỤ
| Input                                             | Ouput |
|---------------------------------------------------|-------|
| ((                                            | FALSE |
| )}[}})]( | FALSE|
| (){{}[]()}[[]{}[{[{{}}]}]] | TRUE|
| }({){[()() | FALSE |
| ])()()}[)[({)()]{{}[[)[}]))[[{()]{(][}{)[][[(]]( | FALSE |
| [[[(}{{[]]]])[()([[(}{}{{[}([) | FALSE | 
| (){[([[]{}[]][])[{}[()][()]]{()}(([]))]}(){}{}[()][]()[{()}{}{}{}]({})((){({}((({(){[([()]{}[])]}}))))}) | TRUE |
| {[[]{[][()]}{[{}][()]{[()][]{[][]}{[()][]}{[][]}{}}({})([])}]} | TRUE | 
| [{[]{}(())[]}({})({({})})()](()) | TRUE | 
| {}[]([{(){}(){{{}}}{}[]}[(){}[]{}{}([{}][(){[[]()(()[])](({([])[{}]}{[[]]}))}])]]) | TRUE |
| }]]{({()}())[[([{()}{})}]}({ | FALSE | 
| (()){{}}(({})()[][({{((){})}})]) | TRUE |
| []()()[[]]{{{[]}}}({[]([]){{}}[]}(){[({})]})()({()}) | TRUE |
| END  |  
