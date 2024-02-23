programa {
  funcao inicio() {
   cadeia nome
   caracter sexo
   inteiro idade
   real peso

   //solicitando dados para o usuário.
   escreva("digite seu nome: ")
   leia(nome)

   escreva("digite seu sexo - utilize M ou F : ")
   leia(sexo)

   escreva("digite sua idade: ")
   leia(idade)

   escreva("digite seu peso: ")
   leia(peso)
   

   // exibindo dados para o usuários.
   // limpa o terminal, apagando o conteúdo exibido anterior.
   limpa()
   escreva("=== exibindo dados para o usuário ===")
   escreva("\nnome:", nome)
   escreva("\nsexo:", sexo)
   escreva("\nidade:", idade)
   escreva("\npeso:", peso)

  }
}
