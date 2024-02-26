programa {
  funcao inicio() {
cadeia nome
inteiro idade
real notaUM, notaDOIS, notaTRES
real media

escreva("digite seu nome: ")
leia (nome)

escreva("digite sua idade: ")
leia (idade)

escreva("digite sua nota1: ")
leia (notaUM)
escreva("digite sua nota2: ")
leia(notaDOIS)
escreva("digite sua nota3: ")
leia (notaTRES)

media= (notaUM + notaDOIS + notaTRES) / 3

limpa()

escreva(nome)

escreva(idade)

escreva("---notas---")

escreva("\nnota1: " , notaUM)
escreva("\nnota2: " , notaDOIS)
escreva("\nnota3: " , notaTRES)
escreva("\nmedia: " , media)
se (media>=7){
  escreva("\naprovado")
}senao{
  escreva("\nreprovado")
}

  }
}
