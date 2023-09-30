import os 
sec = ['printing','variables','operator','selection','loops','1D array','char array',
       'Multi Array','functions','Fecursive function','structures','stl','pointers']
for i in range(0,len(sec)):
    sec[i] = str(i+1)+'_'+sec[i]

levels = ['easy','medium','Super']

for i in range(len(sec)):
    os.makedirs(f"{sec[i]}")
    for j in range(len(levels)):
        with open(f'{sec[i]}/{sec[i]}_{levels[j]}.cpp','w') as f:
            f.write(f'//{sec[i]}_{levels[j]}.cpp\n#include <iostream>\nusing namespace std;\n\nint main() {{\n\t//let\'s code\n\t\n}}')


