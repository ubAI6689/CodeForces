#!/bin/bash
fn="/home/$USER/CodeForces/800/src/$(date +"%Y%m%d_%H%M")_$1.cpp"
printf "/*\n$1\n\nURL:\nQuestion:\n*/\n#include <iostream>\n#include <bits/stdc++.h>\nusing namespace std;" >> $fn
printf "\n\nint main()\n{\n\treturn 0;\n}\n" >> $fn
code "$fn"

fn1="/home/$USER/CodeForces/Run/$1.sh"
printf "#!/bin/bash\ng++ -o /home/$USER/CodeForces/800/bin/$1 /home/$USER/CodeForces/800/src/$fn\n" >> $fn1
chmod u+x $fn1
