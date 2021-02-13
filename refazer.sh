base=/home/gabriel/Desktop/qd/projetos/libft
caminho=$base/teste
rm -rf -- $caminho
cp -r -v -n $base/libft/ $caminho

if [ "$1" = "1" ]
then
    echo primeiro teste
elif [ "$1" = "2" ]
then
    cat $caminho/Makefile | sed 's/CAMINHO = sources\//CAMINHO = /g' > $caminho/oxi
    mv $caminho/oxi $caminho/Makefile
    cd $caminho
    $caminho/change.sh
    cd $2
elif [ "$1" = "3" ]
then
    cat $caminho/Makefile | sed 's/CAMINHO = sources\//CAMINHO = /g' > $caminho/oxi
    mv $caminho/oxi $caminho/Makefile
    cd $caminho
    $caminho/change.sh
    cd $2
else
    echo so existem 3 testadores carai
fi

