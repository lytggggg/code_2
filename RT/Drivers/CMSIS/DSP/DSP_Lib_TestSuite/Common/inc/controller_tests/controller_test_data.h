??# i f n d e f   _ C O N T R O L L E R _ T E S T _ D A T A _ H _  
 # d e f i n e   _ C O N T R O L L E R _ T E S T _ D A T A _ H _  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   I n c l u d e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 # i n c l u d e   " a r m _ m a t h . h "  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   M a c r o s   a n d   D e f i n e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 # d e f i n e   C O N T R O L L E R _ M A X _ L E N   1 0 2 4  
 # d e f i n e   C O N T R O L L E R _ M A X _ C O E F F S _ L E N   ( 1 2   *   3 )  
 # d e f i n e   T R A N F O R M _ B I G G E S T _ I N P U T _ T Y P E   f l o a t 3 2 _ t  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   V a r i a b l e   D e c l a r a t i o n s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 e x t e r n   f l o a t 3 2 _ t   c o n t r o l l e r _ o u t p u t _ f u t [ C O N T R O L L E R _ M A X _ L E N ] ;  
 e x t e r n   f l o a t 3 2 _ t   c o n t r o l l e r _ o u t p u t _ r e f [ C O N T R O L L E R _ M A X _ L E N ] ;  
 e x t e r n   f l o a t 3 2 _ t   c o n t r o l l e r _ o u t p u t _ f 3 2 _ f u t [ C O N T R O L L E R _ M A X _ L E N ] ;  
 e x t e r n   f l o a t 3 2 _ t   c o n t r o l l e r _ o u t p u t _ f 3 2 _ r e f [ C O N T R O L L E R _ M A X _ L E N ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   c o n t r o l l e r _ f 3 2 _ i n p u t s [ C O N T R O L L E R _ M A X _ L E N ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   c o n t r o l l e r _ q 3 1 _ i n p u t s [ C O N T R O L L E R _ M A X _ L E N ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   *   c o n t r o l l e r _ q 1 5 _ i n p u t s ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   c o n t r o l l e r _ f 3 2 _ c o e f f s [ C O N T R O L L E R _ M A X _ C O E F F S _ L E N ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   c o n t r o l l e r _ q 3 1 _ c o e f f s [ C O N T R O L L E R _ M A X _ C O E F F S _ L E N ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   c o n t r o l l e r _ q 1 5 _ c o e f f s [ C O N T R O L L E R _ M A X _ C O E F F S _ L E N ] ;  
  
 # e n d i f   / *   _ C O N T R O L L E R _ T E S T _ D A T A _ H _   * /  