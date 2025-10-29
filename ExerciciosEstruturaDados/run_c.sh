


if [ -z "$1" ]; then
  echo "Uso: ./run_c.sh arquivo.c"
  exit 1
fi


gcc "$1" -o program.out

if [ $? -eq 0 ]; then
  echo "Compilação bem-sucedida! "
  echo "Executando..."
  echo "---------------------------"
  ./program.out
else
  echo "Erro na compilação "
fi
