??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ c o m m o n _ t a b l e s . h  
   *   D e s c r i p t i o n :     E x t e r n   d e c l a r a t i o n   f o r   c o m m o n   t a b l e s  
   *  
   *   $ D a t e :                 2 7 .   J a n u a r y   2 0 1 7  
   *   $ R e v i s i o n :         V . 1 . 5 . 1  
   *  
   *   T a r g e t   P r o c e s s o r :   C o r t e x - M   c o r e s  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 / *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 7   A R M   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   * /  
  
 # i f n d e f   _ A R M _ C O M M O N _ T A B L E S _ H  
 # d e f i n e   _ A R M _ C O M M O N _ T A B L E S _ H  
  
 # i n c l u d e   " a r m _ m a t h . h "  
  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v T a b l e [ 1 0 2 4 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   a r m R e c i p T a b l e Q 1 5 [ 6 4 ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   a r m R e c i p T a b l e Q 3 1 [ 6 4 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ 1 6 [ 3 2 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ 3 2 [ 6 4 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ 6 4 [ 1 2 8 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ 1 2 8 [ 2 5 6 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ 2 5 6 [ 5 1 2 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ 5 1 2 [ 1 0 2 4 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ 1 0 2 4 [ 2 0 4 8 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ 2 0 4 8 [ 4 0 9 6 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ 4 0 9 6 [ 8 1 9 2 ] ;  
 # d e f i n e   t w i d d l e C o e f   t w i d d l e C o e f _ 4 0 9 6  
 e x t e r n   c o n s t   q 3 1 _ t   t w i d d l e C o e f _ 1 6 _ q 3 1 [ 2 4 ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   t w i d d l e C o e f _ 3 2 _ q 3 1 [ 4 8 ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   t w i d d l e C o e f _ 6 4 _ q 3 1 [ 9 6 ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   t w i d d l e C o e f _ 1 2 8 _ q 3 1 [ 1 9 2 ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   t w i d d l e C o e f _ 2 5 6 _ q 3 1 [ 3 8 4 ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   t w i d d l e C o e f _ 5 1 2 _ q 3 1 [ 7 6 8 ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   t w i d d l e C o e f _ 1 0 2 4 _ q 3 1 [ 1 5 3 6 ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   t w i d d l e C o e f _ 2 0 4 8 _ q 3 1 [ 3 0 7 2 ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   t w i d d l e C o e f _ 4 0 9 6 _ q 3 1 [ 6 1 4 4 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   t w i d d l e C o e f _ 1 6 _ q 1 5 [ 2 4 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   t w i d d l e C o e f _ 3 2 _ q 1 5 [ 4 8 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   t w i d d l e C o e f _ 6 4 _ q 1 5 [ 9 6 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   t w i d d l e C o e f _ 1 2 8 _ q 1 5 [ 1 9 2 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   t w i d d l e C o e f _ 2 5 6 _ q 1 5 [ 3 8 4 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   t w i d d l e C o e f _ 5 1 2 _ q 1 5 [ 7 6 8 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   t w i d d l e C o e f _ 1 0 2 4 _ q 1 5 [ 1 5 3 6 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   t w i d d l e C o e f _ 2 0 4 8 _ q 1 5 [ 3 0 7 2 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   t w i d d l e C o e f _ 4 0 9 6 _ q 1 5 [ 6 1 4 4 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ r f f t _ 3 2 [ 3 2 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ r f f t _ 6 4 [ 6 4 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ r f f t _ 1 2 8 [ 1 2 8 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ r f f t _ 2 5 6 [ 2 5 6 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ r f f t _ 5 1 2 [ 5 1 2 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ r f f t _ 1 0 2 4 [ 1 0 2 4 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ r f f t _ 2 0 4 8 [ 2 0 4 8 ] ;  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   t w i d d l e C o e f _ r f f t _ 4 0 9 6 [ 4 0 9 6 ] ;  
  
 / *   f l o a t i n g - p o i n t   b i t   r e v e r s a l   t a b l e s   * /  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ 1 6 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 2 0 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ 3 2 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 4 8 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ 6 4 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 5 6 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ 1 2 8 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 2 0 8 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ 2 5 6 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 4 4 0 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ 5 1 2 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 4 4 8 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ 1 0 2 4 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 1 8 0 0 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ 2 0 4 8 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 3 8 0 8 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ 4 0 9 6 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 4 0 3 2 )  
  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e 1 6 [ A R M B I T R E V I N D E X T A B L E _ 1 6 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e 3 2 [ A R M B I T R E V I N D E X T A B L E _ 3 2 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e 6 4 [ A R M B I T R E V I N D E X T A B L E _ 6 4 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e 1 2 8 [ A R M B I T R E V I N D E X T A B L E _ 1 2 8 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e 2 5 6 [ A R M B I T R E V I N D E X T A B L E _ 2 5 6 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e 5 1 2 [ A R M B I T R E V I N D E X T A B L E _ 5 1 2 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e 1 0 2 4 [ A R M B I T R E V I N D E X T A B L E _ 1 0 2 4 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e 2 0 4 8 [ A R M B I T R E V I N D E X T A B L E _ 2 0 4 8 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e 4 0 9 6 [ A R M B I T R E V I N D E X T A B L E _ 4 0 9 6 _ T A B L E _ L E N G T H ] ;  
  
 / *   f i x e d - p o i n t   b i t   r e v e r s a l   t a b l e s   * /  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ F I X E D _ 1 6 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 1 2 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ F I X E D _ 3 2 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 2 4 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ F I X E D _ 6 4 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 5 6 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ F I X E D _ 1 2 8 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 1 1 2 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ F I X E D _ 2 5 6 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 2 4 0 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ F I X E D _ 5 1 2 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 4 8 0 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ F I X E D _ 1 0 2 4 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 9 9 2 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ F I X E D _ 2 0 4 8 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 1 9 8 4 )  
 # d e f i n e   A R M B I T R E V I N D E X T A B L E _ F I X E D _ 4 0 9 6 _ T A B L E _ L E N G T H   ( ( u i n t 1 6 _ t ) 4 0 3 2 )  
  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e _ f i x e d _ 1 6 [ A R M B I T R E V I N D E X T A B L E _ F I X E D _ 1 6 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e _ f i x e d _ 3 2 [ A R M B I T R E V I N D E X T A B L E _ F I X E D _ 3 2 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e _ f i x e d _ 6 4 [ A R M B I T R E V I N D E X T A B L E _ F I X E D _ 6 4 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e _ f i x e d _ 1 2 8 [ A R M B I T R E V I N D E X T A B L E _ F I X E D _ 1 2 8 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e _ f i x e d _ 2 5 6 [ A R M B I T R E V I N D E X T A B L E _ F I X E D _ 2 5 6 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e _ f i x e d _ 5 1 2 [ A R M B I T R E V I N D E X T A B L E _ F I X E D _ 5 1 2 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e _ f i x e d _ 1 0 2 4 [ A R M B I T R E V I N D E X T A B L E _ F I X E D _ 1 0 2 4 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e _ f i x e d _ 2 0 4 8 [ A R M B I T R E V I N D E X T A B L E _ F I X E D _ 2 0 4 8 _ T A B L E _ L E N G T H ] ;  
 e x t e r n   c o n s t   u i n t 1 6 _ t   a r m B i t R e v I n d e x T a b l e _ f i x e d _ 4 0 9 6 [ A R M B I T R E V I N D E X T A B L E _ F I X E D _ 4 0 9 6 _ T A B L E _ L E N G T H ] ;  
  
 / *   T a b l e s   f o r   F a s t   M a t h   S i n e   a n d   C o s i n e   * /  
 e x t e r n   c o n s t   f l o a t 3 2 _ t   s i n T a b l e _ f 3 2 [ F A S T _ M A T H _ T A B L E _ S I Z E   +   1 ] ;  
 e x t e r n   c o n s t   q 3 1 _ t   s i n T a b l e _ q 3 1 [ F A S T _ M A T H _ T A B L E _ S I Z E   +   1 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   s i n T a b l e _ q 1 5 [ F A S T _ M A T H _ T A B L E _ S I Z E   +   1 ] ;  
  
 # e n d i f   / *     A R M _ C O M M O N _ T A B L E S _ H   * /  