�?/ *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 8   A r m   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
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
 # i n c l u d e   " r e f _ f u n c t i o n s . h "  
  
 v o i d   a r m _ f u l l y _ c o n n e c t e d _ q 7 _ o p t _ r e f ( c o n s t   q 7 _ t   *   p V ,         / /   p o i n t e r   t o   v e c t o r  
                                                                         c o n s t   q 7 _ t   *   p M ,         / /   p o i n t e r   t o   m a t r i x  
                                                                         c o n s t   u i n t 1 6 _ t   d i m _ v e c ,   / /   l e n g t h   o f   t h e   v e c t o r  
                                                                         c o n s t   u i n t 1 6 _ t   n u m _ o f _ r o w s ,   / /   n u m C o l   o f   A  
                                                                         c o n s t   u i n t 1 6 _ t   b i a s _ s h i f t ,     / /   a m o u n t   o f   l e f t - s h i f t   f o r   b i a s  
                                                                         c o n s t   u i n t 1 6 _ t   o u t _ s h i f t ,       / /   a m o u n t   o f   r i g h t - s h i f t   f o r   o u t p u t  
                                                                         c o n s t   q 7 _ t   *   b i a s ,   q 7 _ t   *   p O u t ,   / /   o u t p u t   o p e r a n d  
                                                                         q 1 5 _ t   *   v e c _ b u f f e r )  
 {  
  
         u i n t 1 6 _ t     r o w C n t   =   n u m _ o f _ r o w s   > >   2 ;  
         c o n s t   q 7 _ t   * p B   =   p M ;  
         c o n s t   q 7 _ t   * p A ;  
         q 7 _ t           * p O   =   p O u t ;  
         c o n s t   q 7 _ t   * p B i a s   =   b i a s ;  
  
         w h i l e   ( r o w C n t )  
         {  
                 p A   =   p V ;  
 # i f n d e f   A R M _ N N _ T R U N C A T E  
                 q 3 1 _ t           s u m   =   ( * p B i a s + +   < <   b i a s _ s h i f t )   +   ( 0 x 1   < <   ( o u t _ s h i f t   -   1 ) ) ;  
                 q 3 1 _ t           s u m 2   =   ( * p B i a s + +   < <   b i a s _ s h i f t )   +   ( 0 x 1   < <   ( o u t _ s h i f t   -   1 ) ) ;  
                 q 3 1 _ t           s u m 3   =   ( * p B i a s + +   < <   b i a s _ s h i f t )   +   ( 0 x 1   < <   ( o u t _ s h i f t   -   1 ) ) ;  
                 q 3 1 _ t           s u m 4   =   ( * p B i a s + +   < <   b i a s _ s h i f t )   +   ( 0 x 1   < <   ( o u t _ s h i f t   -   1 ) ) ;  
 # e l s e  
                 q 3 1 _ t           s u m   =   * p B i a s + +   < <   b i a s _ s h i f t ;  
                 q 3 1 _ t           s u m 2   =   * p B i a s + +   < <   b i a s _ s h i f t ;  
                 q 3 1 _ t           s u m 3   =   * p B i a s + +   < <   b i a s _ s h i f t ;  
                 q 3 1 _ t           s u m 4   =   * p B i a s + +   < <   b i a s _ s h i f t ;  
 # e n d i f  
  
                 u i n t 1 6 _ t     c o l C n t   =   d i m _ v e c   > >   2 ;  
  
                 w h i l e   ( c o l C n t )  
                 {  
                         q 7 _ t             i n A 1   =   * p A + + ;  
                         q 7 _ t             i n A 3   =   * p A + + ;  
                         q 7 _ t             i n A 2   =   * p A + + ;  
                         q 7 _ t             i n A 4   =   * p A + + ;  
  
                         q 7 _ t             i n B 1   =   * p B + + ;  
                         q 7 _ t             i n B 3   =   * p B + + ;  
                         q 7 _ t             i n B 2   =   * p B + + ;  
                         q 7 _ t             i n B 4   =   * p B + + ;  
  
                         s u m   + =   i n A 1   *   i n B 1   +   i n A 2   *   i n B 2 ;  
                         s u m 2   + =   i n A 1   *   i n B 3   +   i n A 2   *   i n B 4 ;  
  
                         i n B 1   =   * p B + + ;  
                         i n B 3   =   * p B + + ;  
                         i n B 2   =   * p B + + ;  
                         i n B 4   =   * p B + + ;  
  
                         s u m 3   + =   i n A 1   *   i n B 1   +   i n A 2   *   i n B 2 ;  
                         s u m 4   + =   i n A 1   *   i n B 3   +   i n A 2   *   i n B 4 ;  
  
                         i n B 1   =   * p B + + ;  
                         i n B 3   =   * p B + + ;  
                         i n B 2   =   * p B + + ;  
                         i n B 4   =   * p B + + ;  
  
                         s u m   + =   i n A 3   *   i n B 1   +   i n A 4   *   i n B 2 ;  
                         s u m 2   + =   i n A 3   *   i n B 3   +   i n A 4   *   i n B 4 ;  
  
                         i n B 1   =   * p B + + ;  
                         i n B 3   =   * p B + + ;  
                         i n B 2   =   * p B + + ;  
                         i n B 4   =   * p B + + ;  
  
                         s u m 3   + =   i n A 3   *   i n B 1   +   i n A 4   *   i n B 2 ;  
                         s u m 4   + =   i n A 3   *   i n B 3   +   i n A 4   *   i n B 4 ;  
  
                         c o l C n t - - ;  
                 }  
                 c o l C n t   =   d i m _ v e c   &   0 x 3 ;  
                 w h i l e   ( c o l C n t )  
                 {  
                         q 7 _ t             i n A   =   * p A + + ;  
                         q 7 _ t             i n B   =   * p B + + ;  
                         s u m   + =   i n A   *   i n B ;  
                         i n B   =   * p B + + ;  
                         s u m 2   + =   i n A   *   i n B ;  
                         i n B   =   * p B + + ;  
                         s u m 3   + =   i n A   *   i n B ;  
                         i n B   =   * p B + + ;  
                         s u m 4   + =   i n A   *   i n B ;  
  
                         c o l C n t - - ;  
                 }  
                 * p O + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m   > >   o u t _ s h i f t ) ,   8 ) ;  
                 * p O + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m 2   > >   o u t _ s h i f t ) ,   8 ) ;  
                 * p O + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m 3   > >   o u t _ s h i f t ) ,   8 ) ;  
                 * p O + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m 4   > >   o u t _ s h i f t ) ,   8 ) ;  
  
                 r o w C n t - - ;  
         }  
  
         r o w C n t   =   n u m _ o f _ r o w s   &   0 x 3 ;  
  
         w h i l e   ( r o w C n t )  
         {  
                 p A   =   p V ;  
 # i f n d e f   A R M _ N N _ T R U N C A T E  
                 i n t               i p _ o u t   =   ( * p B i a s + +   < <   b i a s _ s h i f t )   +   ( 0 x 1   < <   ( o u t _ s h i f t   -   1 ) ) ;  
 # e l s e  
                 i n t               i p _ o u t   =   * p B i a s + +   < <   b i a s _ s h i f t ;  
 # e n d i f  
                 f o r   ( i n t   j   =   0 ;   j   <   d i m _ v e c ;   j + + )  
                 {  
                         q 7 _ t             i n A   =   * p A + + ;  
                         q 7 _ t             i n B   =   * p B + + ;  
                         i p _ o u t   + =   i n A   *   i n B ;  
                 }  
                 * p O + +   =   ( q 7 _ t )   _ _ S S A T ( ( i p _ o u t   > >   o u t _ s h i f t ) ,   8 ) ;  
  
                 r o w C n t - - ;  
         }  
 }  