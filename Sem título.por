programa {
  funcao inicio() {
real quantidadeMaca, precoMaca, totalPagar

// solicitando dados para o usuário.
escreva("digite a quantidade de maçãs: ")
leia(quantidadeMaca)
// verificando preço da maçã.
se (quantidadeMaca <= 12) {
  precoMaca = 1.30
} senao {
  precoMaca = 1.00
}
// calculando total da venda.
totalPagar = quantidadeMaca * precoMaca

// exibindo resultados.
escreva("\n=== exibindo resultados ===")
escreva("\nquatidade de maçãs: ", quantidadeMaca)
escreva("\npreço das maçãs: R$ ", precoMaca)
escreva("\ntotal a pagar: R$ ", totalPagar)
  }
}
