programa {
  funcao inicio() {
real quantidadeMaca, precoMaca, totalPagar

// solicitando dados para o usu�rio.
escreva("digite a quantidade de ma��s: ")
leia(quantidadeMaca)
// verificando pre�o da ma��.
se (quantidadeMaca <= 12) {
  precoMaca = 1.30
} senao {
  precoMaca = 1.00
}
// calculando total da venda.
totalPagar = quantidadeMaca * precoMaca

// exibindo resultados.
escreva("\n=== exibindo resultados ===")
escreva("\nquatidade de ma��s: ", quantidadeMaca)
escreva("\npre�o das ma��s: R$ ", precoMaca)
escreva("\ntotal a pagar: R$ ", totalPagar)
  }
}
