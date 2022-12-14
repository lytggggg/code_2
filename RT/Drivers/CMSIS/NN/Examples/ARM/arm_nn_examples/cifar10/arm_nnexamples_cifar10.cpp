??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
 *  
 *  
 *   P r o j e c t :               C M S I S   N N   L i b r a r y  
 *   T i t l e :                   a r m _ n n e x a m p l e s _ c i f a r 1 0 . c p p  
 *  
 *   D e s c r i p t i o n :       C o n v o l u t i o n a l   N e u r a l   N e t w o r k   E x a m p l e  
 *  
 *   T a r g e t   P r o c e s s o r :   C o r t e x - M 4 / C o r t e x - M 7  
 *  
 *   R e d i s t r i b u t i o n   a n d   u s e   i n   s o u r c e   a n d   b i n a r y   f o r m s ,   w i t h   o r   w i t h o u t  
 *   m o d i f i c a t i o n ,   a r e   p e r m i t t e d   p r o v i d e d   t h a t   t h e   f o l l o w i n g   c o n d i t i o n s  
 *   a r e   m e t :  
 *       -   R e d i s t r i b u t i o n s   o f   s o u r c e   c o d e   m u s t   r e t a i n   t h e   a b o v e   c o p y r i g h t  
 *           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r .  
 *       -   R e d i s t r i b u t i o n s   i n   b i n a r y   f o r m   m u s t   r e p r o d u c e   t h e   a b o v e   c o p y r i g h t  
 *           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r   i n  
 *           t h e   d o c u m e n t a t i o n   a n d / o r   o t h e r   m a t e r i a l s   p r o v i d e d   w i t h   t h e  
 *           d i s t r i b u t i o n .  
 *       -   N e i t h e r   t h e   n a m e   o f   A r m   L I M I T E D   n o r   t h e   n a m e s   o f   i t s   c o n t r i b u t o r s  
 *           m a y   b e   u s e d   t o   e n d o r s e   o r   p r o m o t e   p r o d u c t s   d e r i v e d   f r o m   t h i s  
 *           s o f t w a r e   w i t h o u t   s p e c i f i c   p r i o r   w r i t t e n   p e r m i s s i o n .  
 *  
 *   T H I S   S O F T W A R E   I S   P R O V I D E D   B Y   T H E   C O P Y R I G H T   H O L D E R S   A N D   C O N T R I B U T O R S  
 *   " A S   I S "   A N D   A N Y   E X P R E S S   O R   I M P L I E D   W A R R A N T I E S ,   I N C L U D I N G ,   B U T   N O T  
 *   L I M I T E D   T O ,   T H E   I M P L I E D   W A R R A N T I E S   O F   M E R C H A N T A B I L I T Y   A N D   F I T N E S S  
 *   F O R   A   P A R T I C U L A R   P U R P O S E   A R E   D I S C L A I M E D .   I N   N O   E V E N T   S H A L L   T H E  
 *   C O P Y R I G H T   O W N E R   O R   C O N T R I B U T O R S   B E   L I A B L E   F O R   A N Y   D I R E C T ,   I N D I R E C T ,  
 *   I N C I D E N T A L ,   S P E C I A L ,   E X E M P L A R Y ,   O R   C O N S E Q U E N T I A L   D A M A G E S   ( I N C L U D I N G ,  
 *   B U T   N O T   L I M I T E D   T O ,   P R O C U R E M E N T   O F   S U B S T I T U T E   G O O D S   O R   S E R V I C E S ;  
 *   L O S S   O F   U S E ,   D A T A ,   O R   P R O F I T S ;   O R   B U S I N E S S   I N T E R R U P T I O N )   H O W E V E R  
 *   C A U S E D   A N D   O N   A N Y   T H E O R Y   O F   L I A B I L I T Y ,   W H E T H E R   I N   C O N T R A C T ,   S T R I C T  
 *   L I A B I L I T Y ,   O R   T O R T   ( I N C L U D I N G   N E G L I G E N C E   O R   O T H E R W I S E )   A R I S I N G   I N  
 *   A N Y   W A Y   O U T   O F   T H E   U S E   O F   T H I S   S O F T W A R E ,   E V E N   I F   A D V I S E D   O F   T H E  
 *   P O S S I B I L I T Y   O F   S U C H   D A M A G E .  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 / * *  
   *   @ i n g r o u p   g r o u p E x a m p l e s  
   * /  
  
 / * *  
   *   @ d e f g r o u p   C N N E x a m p l e   C o n v o l u t i o n a l   N e u r a l   N e t w o r k   E x a m p l e  
   *  
   *   \ p a r   D e s c r i p t i o n :  
   *   \ p a r  
   *   D e m o n s t r a t e s   a   c o n v o l u t i o n a l   n e u r a l   n e t w o r k   ( C N N )   e x a m p l e   w i t h   t h e   u s e   o f   c o n v o l u t i o n ,  
   *   R e L U   a c t i v a t i o n ,   p o o l i n g   a n d   f u l l y - c o n n e c t e d   f u n c t i o n s .  
   *  
   *   \ p a r   M o d e l   d e f i n i t i o n :  
   *   \ p a r  
   *   T h e   C N N   u s e d   i n   t h i s   e x a m p l e   i s   b a s e d   o n   C I F A R - 1 0   e x a m p l e   f r o m   C a f f e   [ 1 ] .    
   *   T h e   n e u r a l   n e t w o r k   c o n s i s t s  
   *   o f   3   c o n v o l u t i o n   l a y e r s   i n t e r s p e r s e d   b y   R e L U   a c t i v a t i o n   a n d   m a x   p o o l i n g   l a y e r s ,   f o l l o w e d   b y   a    
   *   f u l l y - c o n n e c t e d   l a y e r   a t   t h e   e n d .   T h e   i n p u t   t o   t h e   n e t w o r k   i s   a   3 2 x 3 2   p i x e l   c o l o r   i m a g e ,   w h i c h   w i l l    
   *   b e   c l a s s i f i e d   i n t o   o n e   o f   t h e   1 0   o u t p u t   c l a s s e s .    
   *   T h i s   e x a m p l e   m o d e l   i m p l e m e n t a t i o n   n e e d s   3 2 . 3   K B   t o   s t o r e   w e i g h t s ,   4 0   K B   f o r   a c t i v a t i o n s   a n d    
   *   3 . 1   K B   f o r   s t o r i n g   t h e   \ c   i m 2 c o l   d a t a .  
   *  
   *   \ i m a g e   h t m l   C I F A R 1 0 _ C N N . g i f   " N e u r a l   N e t w o r k   m o d e l   d e f i n i t i o n "  
   *  
   *   \ p a r   V a r i a b l e s   D e s c r i p t i o n :  
   *   \ p a r  
   *   \ l i   \ c   c o n v 1 _ w t ,   \ c   c o n v 2 _ w t ,   \ c   c o n v 3 _ w t   a r e   c o n v o l u t i o n   l a y e r   w e i g h t   m a t r i c e s  
   *   \ l i   \ c   c o n v 1 _ b i a s ,   \ c   c o n v 2 _ b i a s ,   \ c   c o n v 3 _ b i a s   a r e   c o n v o l u t i o n   l a y e r   b i a s   a r r a y s  
   *   \ l i   \ c   i p 1 _ w t ,   i p 1 _ b i a s   p o i n t   t o   f u l l y - c o n n e c t e d   l a y e r   w e i g h t s   a n d   b i a s e s  
   *   \ l i   \ c   i n p u t _ d a t a   p o i n t s   t o   t h e   i n p u t   i m a g e   d a t a  
   *   \ l i   \ c   o u t p u t _ d a t a   p o i n t s   t o   t h e   c l a s s i f i c a t i o n   o u t p u t  
   *   \ l i   \ c   c o l _ b u f f e r   i s   a   b u f f e r   t o   s t o r e   t h e   \ c   i m 2 c o l   o u t p u t  
   *   \ l i   \ c   s c r a t c h _ b u f f e r   i s   u s e d   t o   s t o r e   t h e   a c t i v a t i o n   d a t a   ( i n t e r m e d i a t e   l a y e r   o u t p u t s )  
   *  
   *   \ p a r   C M S I S   D S P   S o f t w a r e   L i b r a r y   F u n c t i o n s   U s e d :  
   *   \ p a r  
   *   -   a r m _ c o n v o l v e _ H W C _ q 7 _ R G B ( )  
   *   -   a r m _ c o n v o l v e _ H W C _ q 7 _ f a s t ( )  
   *   -   a r m _ r e l u _ q 7 ( )  
   *   -   a r m _ m a x p o o l _ q 7 _ H W C ( )  
   *   -   a r m _ a v e p o o l _ q 7 _ H W C ( )  
   *   -   a r m _ f u l l y _ c o n n e c t e d _ q 7 _ o p t ( )  
   *   -   a r m _ f u l l y _ c o n n e c t e d _ q 7 ( )  
   *  
   *   < b >   R e f e r     < / b >  
   *   \ l i n k   a r m _ n n e x a m p l e s _ c i f a r 1 0 . c p p   \ e n d l i n k  
   *  
   *   \ p a r   [ 1 ]   h t t p s : / / g i t h u b . c o m / B V L C / c a f f e  
   * /  
  
 # i n c l u d e   < s t d i n t . h >  
 # i n c l u d e   < s t d i o . h >  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " a r m _ n n e x a m p l e s _ c i f a r 1 0 _ p a r a m e t e r . h "  
 # i n c l u d e   " a r m _ n n e x a m p l e s _ c i f a r 1 0 _ w e i g h t s . h "  
  
 # i n c l u d e   " a r m _ n n f u n c t i o n s . h "  
 # i n c l u d e   " a r m _ n n e x a m p l e s _ c i f a r 1 0 _ i n p u t s . h "  
  
 # i f d e f   _ R T E _  
 # i n c l u d e   " R T E _ C o m p o n e n t s . h "  
 # i f d e f   R T E _ C o m p i l e r _ E v e n t R e c o r d e r  
 # i n c l u d e   " E v e n t R e c o r d e r . h "  
 # e n d i f  
 # e n d i f  
  
 / /   i n c l u d e   t h e   i n p u t   a n d   w e i g h t s  
  
 s t a t i c   q 7 _ t   c o n v 1 _ w t [ C O N V 1 _ I M _ C H   *   C O N V 1 _ K E R _ D I M   *   C O N V 1 _ K E R _ D I M   *   C O N V 1 _ O U T _ C H ]   =   C O N V 1 _ W T ;  
 s t a t i c   q 7 _ t   c o n v 1 _ b i a s [ C O N V 1 _ O U T _ C H ]   =   C O N V 1 _ B I A S ;  
  
 s t a t i c   q 7 _ t   c o n v 2 _ w t [ C O N V 2 _ I M _ C H   *   C O N V 2 _ K E R _ D I M   *   C O N V 2 _ K E R _ D I M   *   C O N V 2 _ O U T _ C H ]   =   C O N V 2 _ W T ;  
 s t a t i c   q 7 _ t   c o n v 2 _ b i a s [ C O N V 2 _ O U T _ C H ]   =   C O N V 2 _ B I A S ;  
  
 s t a t i c   q 7 _ t   c o n v 3 _ w t [ C O N V 3 _ I M _ C H   *   C O N V 3 _ K E R _ D I M   *   C O N V 3 _ K E R _ D I M   *   C O N V 3 _ O U T _ C H ]   =   C O N V 3 _ W T ;  
 s t a t i c   q 7 _ t   c o n v 3 _ b i a s [ C O N V 3 _ O U T _ C H ]   =   C O N V 3 _ B I A S ;  
  
 s t a t i c   q 7 _ t   i p 1 _ w t [ I P 1 _ D I M   *   I P 1 _ O U T ]   =   I P 1 _ W T ;  
 s t a t i c   q 7 _ t   i p 1 _ b i a s [ I P 1 _ O U T ]   =   I P 1 _ B I A S ;  
  
 / *   H e r e   t h e   i m a g e _ d a t a   s h o u l d   b e   t h e   r a w   u i n t 8   t y p e   R G B   i m a g e   i n   [ R G B ,   R G B ,   R G B   . . .   R G B ]   f o r m a t   * /  
 u i n t 8 _ t       i m a g e _ d a t a [ C O N V 1 _ I M _ C H   *   C O N V 1 _ I M _ D I M   *   C O N V 1 _ I M _ D I M ]   =   I M G _ D A T A ;  
 q 7 _ t             o u t p u t _ d a t a [ I P 1 _ O U T ] ;  
  
 / / v e c t o r   b u f f e r :   m a x ( i m 2 c o l   b u f f e r , a v e r a g e   p o o l   b u f f e r ,   f u l l y   c o n n e c t e d   b u f f e r )  
 q 7 _ t             c o l _ b u f f e r [ 2   *   5   *   5   *   3 2   *   2 ] ;  
  
 q 7 _ t             s c r a t c h _ b u f f e r [ 3 2   *   3 2   *   1 0   *   4 ] ;  
  
 i n t   m a i n ( )  
 {  
     # i f d e f   R T E _ C o m p i l e r _ E v e n t R e c o r d e r  
     E v e n t R e c o r d e r I n i t i a l i z e   ( E v e n t R e c o r d A l l ,   1 ) ;     / /   i n i t i a l i z e   a n d   s t a r t   E v e n t   R e c o r d e r  
     # e n d i f  
  
     p r i n t f ( " s t a r t   e x e c u t i o n \ n " ) ;  
     / *   s t a r t   t h e   e x e c u t i o n   * /  
  
     q 7 _ t           * i m g _ b u f f e r 1   =   s c r a t c h _ b u f f e r ;  
     q 7 _ t           * i m g _ b u f f e r 2   =   i m g _ b u f f e r 1   +   3 2   *   3 2   *   3 2 ;  
  
     / *   i n p u t   p r e - p r o c e s s i n g   * /  
     i n t   m e a n _ d a t a [ 3 ]   =   I N P U T _ M E A N _ S H I F T ;  
     u n s i g n e d   i n t   s c a l e _ d a t a [ 3 ]   =   I N P U T _ R I G H T _ S H I F T ;  
     f o r   ( i n t   i = 0 ; i < 3 2 * 3 2 * 3 ;   i + = 3 )   {  
         i m g _ b u f f e r 2 [ i ]   =       ( q 7 _ t ) _ _ S S A T (   ( ( ( ( i n t ) i m a g e _ d a t a [ i ]       -   m e a n _ d a t a [ 0 ] ) < < 7 )   +   ( 0 x 1 < < ( s c a l e _ d a t a [ 0 ] - 1 ) ) )  
                                                           > >   s c a l e _ d a t a [ 0 ] ,   8 ) ;  
         i m g _ b u f f e r 2 [ i + 1 ]   =   ( q 7 _ t ) _ _ S S A T (   ( ( ( ( i n t ) i m a g e _ d a t a [ i + 1 ]   -   m e a n _ d a t a [ 1 ] ) < < 7 )   +   ( 0 x 1 < < ( s c a l e _ d a t a [ 1 ] - 1 ) ) )  
                                                           > >   s c a l e _ d a t a [ 1 ] ,   8 ) ;  
         i m g _ b u f f e r 2 [ i + 2 ]   =   ( q 7 _ t ) _ _ S S A T (   ( ( ( ( i n t ) i m a g e _ d a t a [ i + 2 ]   -   m e a n _ d a t a [ 2 ] ) < < 7 )   +   ( 0 x 1 < < ( s c a l e _ d a t a [ 2 ] - 1 ) ) )  
                                                           > >   s c a l e _ d a t a [ 2 ] ,   8 ) ;  
     }  
      
     / /   c o n v 1   i m g _ b u f f e r 2   - >   i m g _ b u f f e r 1  
     a r m _ c o n v o l v e _ H W C _ q 7 _ R G B ( i m g _ b u f f e r 2 ,   C O N V 1 _ I M _ D I M ,   C O N V 1 _ I M _ C H ,   c o n v 1 _ w t ,   C O N V 1 _ O U T _ C H ,   C O N V 1 _ K E R _ D I M ,   C O N V 1 _ P A D D I N G ,  
                                                     C O N V 1 _ S T R I D E ,   c o n v 1 _ b i a s ,   C O N V 1 _ B I A S _ L S H I F T ,   C O N V 1 _ O U T _ R S H I F T ,   i m g _ b u f f e r 1 ,   C O N V 1 _ O U T _ D I M ,  
                                                     ( q 1 5 _ t   * )   c o l _ b u f f e r ,   N U L L ) ;  
  
     a r m _ r e l u _ q 7 ( i m g _ b u f f e r 1 ,   C O N V 1 _ O U T _ D I M   *   C O N V 1 _ O U T _ D I M   *   C O N V 1 _ O U T _ C H ) ;  
  
     / /   p o o l 1   i m g _ b u f f e r 1   - >   i m g _ b u f f e r 2  
     a r m _ m a x p o o l _ q 7 _ H W C ( i m g _ b u f f e r 1 ,   C O N V 1 _ O U T _ D I M ,   C O N V 1 _ O U T _ C H ,   P O O L 1 _ K E R _ D I M ,  
                                           P O O L 1 _ P A D D I N G ,   P O O L 1 _ S T R I D E ,   P O O L 1 _ O U T _ D I M ,   N U L L ,   i m g _ b u f f e r 2 ) ;  
  
     / /   c o n v 2   i m g _ b u f f e r 2   - >   i m g _ b u f f e r 1  
     a r m _ c o n v o l v e _ H W C _ q 7 _ f a s t ( i m g _ b u f f e r 2 ,   C O N V 2 _ I M _ D I M ,   C O N V 2 _ I M _ C H ,   c o n v 2 _ w t ,   C O N V 2 _ O U T _ C H ,   C O N V 2 _ K E R _ D I M ,  
                                                       C O N V 2 _ P A D D I N G ,   C O N V 2 _ S T R I D E ,   c o n v 2 _ b i a s ,   C O N V 2 _ B I A S _ L S H I F T ,   C O N V 2 _ O U T _ R S H I F T ,   i m g _ b u f f e r 1 ,  
                                                       C O N V 2 _ O U T _ D I M ,   ( q 1 5 _ t   * )   c o l _ b u f f e r ,   N U L L ) ;  
  
     a r m _ r e l u _ q 7 ( i m g _ b u f f e r 1 ,   C O N V 2 _ O U T _ D I M   *   C O N V 2 _ O U T _ D I M   *   C O N V 2 _ O U T _ C H ) ;  
  
     / /   p o o l 2   i m g _ b u f f e r 1   - >   i m g _ b u f f e r 2  
     a r m _ m a x p o o l _ q 7 _ H W C ( i m g _ b u f f e r 1 ,   C O N V 2 _ O U T _ D I M ,   C O N V 2 _ O U T _ C H ,   P O O L 2 _ K E R _ D I M ,  
                                           P O O L 2 _ P A D D I N G ,   P O O L 2 _ S T R I D E ,   P O O L 2 _ O U T _ D I M ,   c o l _ b u f f e r ,   i m g _ b u f f e r 2 ) ;  
  
 / /   c o n v 3   i m g _ b u f f e r 2   - >   i m g _ b u f f e r 1  
     a r m _ c o n v o l v e _ H W C _ q 7 _ f a s t ( i m g _ b u f f e r 2 ,   C O N V 3 _ I M _ D I M ,   C O N V 3 _ I M _ C H ,   c o n v 3 _ w t ,   C O N V 3 _ O U T _ C H ,   C O N V 3 _ K E R _ D I M ,  
                                                       C O N V 3 _ P A D D I N G ,   C O N V 3 _ S T R I D E ,   c o n v 3 _ b i a s ,   C O N V 3 _ B I A S _ L S H I F T ,   C O N V 3 _ O U T _ R S H I F T ,   i m g _ b u f f e r 1 ,  
                                                       C O N V 3 _ O U T _ D I M ,   ( q 1 5 _ t   * )   c o l _ b u f f e r ,   N U L L ) ;  
  
     a r m _ r e l u _ q 7 ( i m g _ b u f f e r 1 ,   C O N V 3 _ O U T _ D I M   *   C O N V 3 _ O U T _ D I M   *   C O N V 3 _ O U T _ C H ) ;  
  
     / /   p o o l 3   i m g _ b u f f e r - >   i m g _ b u f f e r 2  
     a r m _ m a x p o o l _ q 7 _ H W C ( i m g _ b u f f e r 1 ,   C O N V 3 _ O U T _ D I M ,   C O N V 3 _ O U T _ C H ,   P O O L 3 _ K E R _ D I M ,  
                                           P O O L 3 _ P A D D I N G ,   P O O L 3 _ S T R I D E ,   P O O L 3 _ O U T _ D I M ,   c o l _ b u f f e r ,   i m g _ b u f f e r 2 ) ;  
  
     a r m _ f u l l y _ c o n n e c t e d _ q 7 _ o p t ( i m g _ b u f f e r 2 ,   i p 1 _ w t ,   I P 1 _ D I M ,   I P 1 _ O U T ,   I P 1 _ B I A S _ L S H I F T ,   I P 1 _ O U T _ R S H I F T ,   i p 1 _ b i a s ,  
                                                           o u t p u t _ d a t a ,   ( q 1 5 _ t   * )   i m g _ b u f f e r 1 ) ;  
  
     a r m _ s o f t m a x _ q 7 ( o u t p u t _ d a t a ,   1 0 ,   o u t p u t _ d a t a ) ;  
  
     f o r   ( i n t   i   =   0 ;   i   <   1 0 ;   i + + )  
     {  
             p r i n t f ( " % d :   % d \ n " ,   i ,   o u t p u t _ d a t a [ i ] ) ;  
     }  
  
     r e t u r n   0 ;  
 }  