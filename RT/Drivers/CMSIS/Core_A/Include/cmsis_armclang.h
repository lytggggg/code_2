??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * *  
   *   @ f i l e           c m s i s _ a r m c l a n g . h  
   *   @ b r i e f         C M S I S   c o m p i l e r   s p e c i f i c   m a c r o s ,   f u n c t i o n s ,   i n s t r u c t i o n s  
   *   @ v e r s i o n     V 1 . 0 . 2  
   *   @ d a t e           1 0 .   J a n u a r y   2 0 1 8  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 0 9 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
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
 # i f n d e f   _ _ C M S I S _ A R M C L A N G _ H  
 # d e f i n e   _ _ C M S I S _ A R M C L A N G _ H  
  
 # p r a g m a   c l a n g   s y s t e m _ h e a d e r       / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   * /  
  
 # i f n d e f   _ _ A R M _ C O M P A T _ H  
 # i n c l u d e   < a r m _ c o m p a t . h >         / *   C o m p a t i b i l i t y   h e a d e r   f o r   A r m   C o m p i l e r   5   i n t r i n s i c s   * /  
 # e n d i f  
  
 / *   C M S I S   c o m p i l e r   s p e c i f i c   d e f i n e s   * /  
 # i f n d e f       _ _ A S M  
     # d e f i n e   _ _ A S M                                                                     _ _ a s m  
 # e n d i f  
 # i f n d e f       _ _ I N L I N E  
     # d e f i n e   _ _ I N L I N E                                                               _ _ i n l i n e  
 # e n d i f  
 # i f n d e f       _ _ F O R C E I N L I N E  
     # d e f i n e   _ _ F O R C E I N L I N E                                                     _ _ a t t r i b u t e _ _ ( ( a l w a y s _ i n l i n e ) )  
 # e n d i f  
 # i f n d e f       _ _ S T A T I C _ I N L I N E  
     # d e f i n e   _ _ S T A T I C _ I N L I N E                                                 s t a t i c   _ _ i n l i n e  
 # e n d i f  
 # i f n d e f       _ _ S T A T I C _ F O R C E I N L I N E  
     # d e f i n e   _ _ S T A T I C _ F O R C E I N L I N E                                       _ _ a t t r i b u t e _ _ ( ( a l w a y s _ i n l i n e ) )   s t a t i c   _ _ i n l i n e  
 # e n d i f  
 # i f n d e f       _ _ N O _ R E T U R N  
     # d e f i n e   _ _ N O _ R E T U R N                                                         _ _ a t t r i b u t e _ _ ( ( _ _ n o r e t u r n _ _ ) )  
 # e n d i f  
 # i f n d e f       C M S I S _ D E P R E C A T E D  
     # d e f i n e   C M S I S _ D E P R E C A T E D                                               _ _ a t t r i b u t e _ _ ( ( d e p r e c a t e d ) )  
 # e n d i f  
 # i f n d e f       _ _ U S E D  
     # d e f i n e   _ _ U S E D                                                                   _ _ a t t r i b u t e _ _ ( ( u s e d ) )  
 # e n d i f  
 # i f n d e f       _ _ W E A K  
     # d e f i n e   _ _ W E A K                                                                   _ _ a t t r i b u t e _ _ ( ( w e a k ) )  
 # e n d i f  
 # i f n d e f       _ _ P A C K E D  
     # d e f i n e   _ _ P A C K E D                                                               _ _ a t t r i b u t e _ _ ( ( p a c k e d ,   a l i g n e d ( 1 ) ) )  
 # e n d i f  
 # i f n d e f       _ _ P A C K E D _ S T R U C T  
     # d e f i n e   _ _ P A C K E D _ S T R U C T                                                 s t r u c t   _ _ a t t r i b u t e _ _ ( ( p a c k e d ,   a l i g n e d ( 1 ) ) )  
 # e n d i f  
 # i f n d e f       _ _ U N A L I G N E D _ U I N T 1 6 _ W R I T E  
     # p r a g m a   c l a n g   d i a g n o s t i c   p u s h  
     # p r a g m a   c l a n g   d i a g n o s t i c   i g n o r e d   " - W p a c k e d "  
 / * l i n t   - e s y m ( 9 0 5 8 ,   T _ U I N T 1 6 _ W R I T E ) * /   / *   d i s a b l e   M I S R A   2 0 1 2   R u l e   2 . 4   f o r   T _ U I N T 1 6 _ W R I T E   * /  
     _ _ P A C K E D _ S T R U C T   T _ U I N T 1 6 _ W R I T E   {   u i n t 1 6 _ t   v ;   } ;  
     # p r a g m a   c l a n g   d i a g n o s t i c   p o p  
     # d e f i n e   _ _ U N A L I G N E D _ U I N T 1 6 _ W R I T E ( a d d r ,   v a l )         ( v o i d ) ( ( ( ( s t r u c t   T _ U I N T 1 6 _ W R I T E   * ) ( v o i d   * ) ( a d d r ) ) - > v )   =   ( v a l ) )  
 # e n d i f  
 # i f n d e f       _ _ U N A L I G N E D _ U I N T 1 6 _ R E A D  
     # p r a g m a   c l a n g   d i a g n o s t i c   p u s h  
     # p r a g m a   c l a n g   d i a g n o s t i c   i g n o r e d   " - W p a c k e d "  
 / * l i n t   - e s y m ( 9 0 5 8 ,   T _ U I N T 1 6 _ R E A D ) * /   / *   d i s a b l e   M I S R A   2 0 1 2   R u l e   2 . 4   f o r   T _ U I N T 1 6 _ R E A D   * /  
     _ _ P A C K E D _ S T R U C T   T _ U I N T 1 6 _ R E A D   {   u i n t 1 6 _ t   v ;   } ;  
     # p r a g m a   c l a n g   d i a g n o s t i c   p o p  
     # d e f i n e   _ _ U N A L I G N E D _ U I N T 1 6 _ R E A D ( a d d r )                     ( ( ( c o n s t   s t r u c t   T _ U I N T 1 6 _ R E A D   * ) ( c o n s t   v o i d   * ) ( a d d r ) ) - > v )  
 # e n d i f  
 # i f n d e f       _ _ U N A L I G N E D _ U I N T 3 2 _ W R I T E  
     # p r a g m a   c l a n g   d i a g n o s t i c   p u s h  
     # p r a g m a   c l a n g   d i a g n o s t i c   i g n o r e d   " - W p a c k e d "  
 / * l i n t   - e s y m ( 9 0 5 8 ,   T _ U I N T 3 2 _ W R I T E ) * /   / *   d i s a b l e   M I S R A   2 0 1 2   R u l e   2 . 4   f o r   T _ U I N T 3 2 _ W R I T E   * /  
     _ _ P A C K E D _ S T R U C T   T _ U I N T 3 2 _ W R I T E   {   u i n t 3 2 _ t   v ;   } ;  
     # p r a g m a   c l a n g   d i a g n o s t i c   p o p  
     # d e f i n e   _ _ U N A L I G N E D _ U I N T 3 2 _ W R I T E ( a d d r ,   v a l )         ( v o i d ) ( ( ( ( s t r u c t   T _ U I N T 3 2 _ W R I T E   * ) ( v o i d   * ) ( a d d r ) ) - > v )   =   ( v a l ) )  
 # e n d i f  
 # i f n d e f       _ _ U N A L I G N E D _ U I N T 3 2 _ R E A D  
     # p r a g m a   c l a n g   d i a g n o s t i c   p u s h  
     # p r a g m a   c l a n g   d i a g n o s t i c   i g n o r e d   " - W p a c k e d "  
     _ _ P A C K E D _ S T R U C T   T _ U I N T 3 2 _ R E A D   {   u i n t 3 2 _ t   v ;   } ;  
     # p r a g m a   c l a n g   d i a g n o s t i c   p o p  
     # d e f i n e   _ _ U N A L I G N E D _ U I N T 3 2 _ R E A D ( a d d r )                     ( ( ( c o n s t   s t r u c t   T _ U I N T 3 2 _ R E A D   * ) ( c o n s t   v o i d   * ) ( a d d r ) ) - > v )  
 # e n d i f  
 # i f n d e f       _ _ A L I G N E D  
     # d e f i n e   _ _ A L I G N E D ( x )                                                       _ _ a t t r i b u t e _ _ ( ( a l i g n e d ( x ) ) )  
 # e n d i f  
 # i f n d e f       _ _ P A C K E D  
     # d e f i n e   _ _ P A C K E D                                                               _ _ a t t r i b u t e _ _ ( ( p a c k e d ) )  
 # e n d i f  
  
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # #     C o r e   I n s t r u c t i o n   A c c e s s     # # # # # # # # # # # # # # # # # # # # # # # # #   * /  
 / * *  
     \ b r i e f       N o   O p e r a t i o n  
   * /  
 # d e f i n e   _ _ N O P                                                           _ _ b u i l t i n _ a r m _ n o p  
  
 / * *  
     \ b r i e f       W a i t   F o r   I n t e r r u p t  
   * /  
 # d e f i n e   _ _ W F I                                                           _ _ b u i l t i n _ a r m _ w f i  
  
 / * *  
     \ b r i e f       W a i t   F o r   E v e n t  
   * /  
 # d e f i n e   _ _ W F E                                                           _ _ b u i l t i n _ a r m _ w f e  
  
 / * *  
     \ b r i e f       S e n d   E v e n t  
   * /  
 # d e f i n e   _ _ S E V                                                           _ _ b u i l t i n _ a r m _ s e v  
  
 / * *  
     \ b r i e f       I n s t r u c t i o n   S y n c h r o n i z a t i o n   B a r r i e r  
   * /  
 # d e f i n e   _ _ I S B ( )   d o   { \  
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \  
                                       _ _ b u i l t i n _ a r m _ i s b ( 0 x F ) ; \  
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \  
                                 }   w h i l e   ( 0 U )  
  
 / * *  
     \ b r i e f       D a t a   S y n c h r o n i z a t i o n   B a r r i e r  
   * /  
 # d e f i n e   _ _ D S B ( )   d o   { \  
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \  
                                       _ _ b u i l t i n _ a r m _ d s b ( 0 x F ) ; \  
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \  
                                 }   w h i l e   ( 0 U )  
  
 / * *  
     \ b r i e f       D a t a   M e m o r y   B a r r i e r  
   * /  
 # d e f i n e   _ _ D M B ( )   d o   { \  
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \  
                                       _ _ b u i l t i n _ a r m _ d m b ( 0 x F ) ; \  
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \  
                                 }   w h i l e   ( 0 U )  
  
 / * *  
     \ b r i e f       R e v e r s e   b y t e   o r d e r   ( 3 2   b i t )  
     \ d e t a i l s   R e v e r s e s   t h e   b y t e   o r d e r   i n   u n s i g n e d   i n t e g e r   v a l u e .   F o r   e x a m p l e ,   0 x 1 2 3 4 5 6 7 8   b e c o m e s   0 x 7 8 5 6 3 4 1 2 .  
     \ p a r a m   [ i n ]         v a l u e     V a l u e   t o   r e v e r s e  
     \ r e t u r n                               R e v e r s e d   v a l u e  
   * /  
 # d e f i n e   _ _ R E V ( v a l u e )       _ _ b u i l t i n _ b s w a p 3 2 ( v a l u e )  
  
 / * *  
     \ b r i e f       R e v e r s e   b y t e   o r d e r   ( 1 6   b i t )  
     \ d e t a i l s   R e v e r s e s   t h e   b y t e   o r d e r   w i t h i n   e a c h   h a l f w o r d   o f   a   w o r d .   F o r   e x a m p l e ,   0 x 1 2 3 4 5 6 7 8   b e c o m e s   0 x 3 4 1 2 7 8 5 6 .  
     \ p a r a m   [ i n ]         v a l u e     V a l u e   t o   r e v e r s e  
     \ r e t u r n                               R e v e r s e d   v a l u e  
   * /  
 # d e f i n e   _ _ R E V 1 6 ( v a l u e )   _ _ R O R ( _ _ R E V ( v a l u e ) ,   1 6 )  
  
  
 / * *  
     \ b r i e f       R e v e r s e   b y t e   o r d e r   ( 1 6   b i t )  
     \ d e t a i l s   R e v e r s e s   t h e   b y t e   o r d e r   i n   a   1 6 - b i t   v a l u e   a n d   r e t u r n s   t h e   s i g n e d   1 6 - b i t   r e s u l t .   F o r   e x a m p l e ,   0 x 0 0 8 0   b e c o m e s   0 x 8 0 0 0 .  
     \ p a r a m   [ i n ]         v a l u e     V a l u e   t o   r e v e r s e  
     \ r e t u r n                               R e v e r s e d   v a l u e  
   * /  
 # d e f i n e   _ _ R E V S H ( v a l u e )   ( i n t 1 6 _ t ) _ _ b u i l t i n _ b s w a p 1 6 ( v a l u e )  
  
  
 / * *  
     \ b r i e f       R o t a t e   R i g h t   i n   u n s i g n e d   v a l u e   ( 3 2   b i t )  
     \ d e t a i l s   R o t a t e   R i g h t   ( i m m e d i a t e )   p r o v i d e s   t h e   v a l u e   o f   t h e   c o n t e n t s   o f   a   r e g i s t e r   r o t a t e d   b y   a   v a r i a b l e   n u m b e r   o f   b i t s .  
     \ p a r a m   [ i n ]         o p 1     V a l u e   t o   r o t a t e  
     \ p a r a m   [ i n ]         o p 2     N u m b e r   o f   B i t s   t o   r o t a t e  
     \ r e t u r n                               R o t a t e d   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ R O R ( u i n t 3 2 _ t   o p 1 ,   u i n t 3 2 _ t   o p 2 )  
 {  
     o p 2   % =   3 2 U ;  
     i f   ( o p 2   = =   0 U )  
     {  
         r e t u r n   o p 1 ;  
     }  
     r e t u r n   ( o p 1   > >   o p 2 )   |   ( o p 1   < <   ( 3 2 U   -   o p 2 ) ) ;  
 }  
  
  
 / * *  
     \ b r i e f       B r e a k p o i n t  
     \ p a r a m   [ i n ]         v a l u e     i s   i g n o r e d   b y   t h e   p r o c e s s o r .  
                                   I f   r e q u i r e d ,   a   d e b u g g e r   c a n   u s e   i t   t o   s t o r e   a d d i t i o n a l   i n f o r m a t i o n   a b o u t   t h e   b r e a k p o i n t .  
   * /  
 # d e f i n e   _ _ B K P T ( v a l u e )       _ _ A S M   v o l a t i l e   ( " b k p t   " # v a l u e )  
  
 / * *  
     \ b r i e f       R e v e r s e   b i t   o r d e r   o f   v a l u e  
     \ p a r a m   [ i n ]         v a l u e     V a l u e   t o   r e v e r s e  
     \ r e t u r n                               R e v e r s e d   v a l u e  
   * /  
 # d e f i n e   _ _ R B I T                     _ _ b u i l t i n _ a r m _ r b i t  
  
 / * *  
     \ b r i e f       C o u n t   l e a d i n g   z e r o s  
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   c o u n t   t h e   l e a d i n g   z e r o s  
     \ r e t u r n                           n u m b e r   o f   l e a d i n g   z e r o s   i n   v a l u e  
   * /  
 # d e f i n e   _ _ C L Z                       ( u i n t 8 _ t ) _ _ b u i l t i n _ c l z  
  
 / * *  
     \ b r i e f       L D R   E x c l u s i v e   ( 8   b i t )  
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   L D R   i n s t r u c t i o n   f o r   8   b i t   v a l u e .  
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   d a t a  
     \ r e t u r n                           v a l u e   o f   t y p e   u i n t 8 _ t   a t   ( * p t r )  
   * /  
 # d e f i n e   _ _ L D R E X B                 ( u i n t 8 _ t ) _ _ b u i l t i n _ a r m _ l d r e x  
  
  
 / * *  
     \ b r i e f       L D R   E x c l u s i v e   ( 1 6   b i t )  
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   L D R   i n s t r u c t i o n   f o r   1 6   b i t   v a l u e s .  
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   d a t a  
     \ r e t u r n                 v a l u e   o f   t y p e   u i n t 1 6 _ t   a t   ( * p t r )  
   * /  
 # d e f i n e   _ _ L D R E X H                 ( u i n t 1 6 _ t ) _ _ b u i l t i n _ a r m _ l d r e x  
  
 / * *  
     \ b r i e f       L D R   E x c l u s i v e   ( 3 2   b i t )  
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   L D R   i n s t r u c t i o n   f o r   3 2   b i t   v a l u e s .  
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   d a t a  
     \ r e t u r n                 v a l u e   o f   t y p e   u i n t 3 2 _ t   a t   ( * p t r )  
   * /  
 # d e f i n e   _ _ L D R E X W                 ( u i n t 3 2 _ t ) _ _ b u i l t i n _ a r m _ l d r e x  
  
 / * *  
     \ b r i e f       S T R   E x c l u s i v e   ( 8   b i t )  
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   S T R   i n s t r u c t i o n   f o r   8   b i t   v a l u e s .  
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   s t o r e  
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   l o c a t i o n  
     \ r e t u r n                     0     F u n c t i o n   s u c c e e d e d  
     \ r e t u r n                     1     F u n c t i o n   f a i l e d  
   * /  
 # d e f i n e   _ _ S T R E X B                 ( u i n t 3 2 _ t ) _ _ b u i l t i n _ a r m _ s t r e x  
  
 / * *  
     \ b r i e f       S T R   E x c l u s i v e   ( 1 6   b i t )  
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   S T R   i n s t r u c t i o n   f o r   1 6   b i t   v a l u e s .  
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   s t o r e  
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   l o c a t i o n  
     \ r e t u r n                     0     F u n c t i o n   s u c c e e d e d  
     \ r e t u r n                     1     F u n c t i o n   f a i l e d  
   * /  
 # d e f i n e   _ _ S T R E X H                 ( u i n t 3 2 _ t ) _ _ b u i l t i n _ a r m _ s t r e x  
  
 / * *  
     \ b r i e f       S T R   E x c l u s i v e   ( 3 2   b i t )  
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   S T R   i n s t r u c t i o n   f o r   3 2   b i t   v a l u e s .  
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   s t o r e  
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   l o c a t i o n  
     \ r e t u r n                     0     F u n c t i o n   s u c c e e d e d  
     \ r e t u r n                     1     F u n c t i o n   f a i l e d  
   * /  
 # d e f i n e   _ _ S T R E X W                 ( u i n t 3 2 _ t ) _ _ b u i l t i n _ a r m _ s t r e x  
  
 / * *  
     \ b r i e f       R e m o v e   t h e   e x c l u s i v e   l o c k  
     \ d e t a i l s   R e m o v e s   t h e   e x c l u s i v e   l o c k   w h i c h   i s   c r e a t e d   b y   L D R E X .  
   * /  
 # d e f i n e   _ _ C L R E X                           _ _ b u i l t i n _ a r m _ c l r e x  
  
 / * *  
     \ b r i e f       S i g n e d   S a t u r a t e  
     \ d e t a i l s   S a t u r a t e s   a   s i g n e d   v a l u e .  
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   b e   s a t u r a t e d  
     \ p a r a m   [ i n ]         s a t     B i t   p o s i t i o n   t o   s a t u r a t e   t o   ( 1 . . 3 2 )  
     \ r e t u r n                           S a t u r a t e d   v a l u e  
   * /  
 # d e f i n e   _ _ S S A T                           _ _ b u i l t i n _ a r m _ s s a t  
  
 / * *  
     \ b r i e f       U n s i g n e d   S a t u r a t e  
     \ d e t a i l s   S a t u r a t e s   a n   u n s i g n e d   v a l u e .  
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   b e   s a t u r a t e d  
     \ p a r a m   [ i n ]         s a t     B i t   p o s i t i o n   t o   s a t u r a t e   t o   ( 0 . . 3 1 )  
     \ r e t u r n                           S a t u r a t e d   v a l u e  
   * /  
 # d e f i n e   _ _ U S A T                           _ _ b u i l t i n _ a r m _ u s a t  
  
  
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # # #     C o r e   F u n c t i o n   A c c e s s     # # # # # # # # # # # # # # # # # # # # # # # # # # #   * /  
  
 / * *  
     \ b r i e f       G e t   F P S C R  
     \ d e t a i l s   R e t u r n s   t h e   c u r r e n t   v a l u e   o f   t h e   F l o a t i n g   P o i n t   S t a t u s / C o n t r o l   r e g i s t e r .  
     \ r e t u r n                               F l o a t i n g   P o i n t   S t a t u s / C o n t r o l   r e g i s t e r   v a l u e  
   * /  
 # d e f i n e   _ _ g e t _ F P S C R             _ _ b u i l t i n _ a r m _ g e t _ f p s c r  
  
 / * *  
     \ b r i e f       S e t   F P S C R  
     \ d e t a i l s   A s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   F l o a t i n g   P o i n t   S t a t u s / C o n t r o l   r e g i s t e r .  
     \ p a r a m   [ i n ]         f p s c r     F l o a t i n g   P o i n t   S t a t u s / C o n t r o l   v a l u e   t o   s e t  
   * /  
 # d e f i n e   _ _ s e t _ F P S C R             _ _ b u i l t i n _ a r m _ s e t _ f p s c r  
  
 / * *   \ b r i e f     G e t   C P S R   R e g i s t e r  
         \ r e t u r n                               C P S R   R e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ C P S R ( v o i d )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ A S M   v o l a t i l e ( " M R S   % 0 ,   c p s r "   :   " = r "   ( r e s u l t )   ) ;  
     r e t u r n ( r e s u l t ) ;  
 }  
  
 / * *   \ b r i e f     S e t   C P S R   R e g i s t e r  
         \ p a r a m   [ i n ]         c p s r     C P S R   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ C P S R ( u i n t 3 2 _ t   c p s r )  
 {  
 _ _ A S M   v o l a t i l e   ( " M S R   c p s r ,   % 0 "   :   :   " r "   ( c p s r )   :   " m e m o r y " ) ;  
 }  
  
 / * *   \ b r i e f     G e t   M o d e  
         \ r e t u r n                                 P r o c e s s o r   M o d e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ m o d e ( v o i d )  
 {  
 	 r e t u r n   ( _ _ g e t _ C P S R ( )   &   0 x 1 F U ) ;  
 }  
  
 / * *   \ b r i e f     S e t   M o d e  
         \ p a r a m   [ i n ]         m o d e     M o d e   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ m o d e ( u i n t 3 2 _ t   m o d e )  
 {  
     _ _ A S M   v o l a t i l e ( " M S R     c p s r _ c ,   % 0 "   :   :   " r "   ( m o d e )   :   " m e m o r y " ) ;  
 }  
  
 / * *   \ b r i e f     G e t   S t a c k   P o i n t e r  
         \ r e t u r n   S t a c k   P o i n t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ S P ( )  
 {  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ A S M   v o l a t i l e ( " M O V     % 0 ,   s p "   :   " = r "   ( r e s u l t )   :   :   " m e m o r y " ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   S t a c k   P o i n t e r  
         \ p a r a m   [ i n ]         s t a c k     S t a c k   P o i n t e r   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ S P ( u i n t 3 2 _ t   s t a c k )  
 {  
     _ _ A S M   v o l a t i l e ( " M O V     s p ,   % 0 "   :   :   " r "   ( s t a c k )   :   " m e m o r y " ) ;  
 }  
  
 / * *   \ b r i e f     G e t   U S R / S Y S   S t a c k   P o i n t e r  
         \ r e t u r n   U S R / S Y S   S t a c k   P o i n t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ S P _ u s r ( )  
 {  
     u i n t 3 2 _ t   c p s r ;  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ A S M   v o l a t i l e (  
         " M R S           % 0 ,   c p s r       \ n "  
         " C P S           # 0 x 1 F             \ n "   / /   n o   e f f e c t   i n   U S R   m o d e  
         " M O V           % 1 ,   s p           \ n "  
         " M S R           c p s r _ c ,   % 2   \ n "   / /   n o   e f f e c t   i n   U S R   m o d e  
         " I S B "   :     " = r " ( c p s r ) ,   " = r " ( r e s u l t )   :   " r " ( c p s r )   :   " m e m o r y "  
       ) ;  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *   \ b r i e f     S e t   U S R / S Y S   S t a c k   P o i n t e r  
         \ p a r a m   [ i n ]         t o p O f P r o c S t a c k     U S R / S Y S   S t a c k   P o i n t e r   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ S P _ u s r ( u i n t 3 2 _ t   t o p O f P r o c S t a c k )  
 {  
     u i n t 3 2 _ t   c p s r ;  
     _ _ A S M   v o l a t i l e (  
         " M R S           % 0 ,   c p s r       \ n "  
         " C P S           # 0 x 1 F             \ n "   / /   n o   e f f e c t   i n   U S R   m o d e  
         " M O V           s p ,   % 1           \ n "  
         " M S R           c p s r _ c ,   % 2   \ n "   / /   n o   e f f e c t   i n   U S R   m o d e  
         " I S B "   :   " = r " ( c p s r )   :   " r "   ( t o p O f P r o c S t a c k ) ,   " r " ( c p s r )   :   " m e m o r y "  
       ) ;  
 }  
  
 / * *   \ b r i e f     G e t   F P E X C  
         \ r e t u r n                               F l o a t i n g   P o i n t   E x c e p t i o n   C o n t r o l   r e g i s t e r   v a l u e  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   u i n t 3 2 _ t   _ _ g e t _ F P E X C ( v o i d )  
 {  
 # i f   ( _ _ F P U _ P R E S E N T   = =   1 )  
     u i n t 3 2 _ t   r e s u l t ;  
     _ _ A S M   v o l a t i l e ( " V M R S   % 0 ,   f p e x c "   :   " = r "   ( r e s u l t )   :   :   " m e m o r y " ) ;  
     r e t u r n ( r e s u l t ) ;  
 # e l s e  
     r e t u r n ( 0 ) ;  
 # e n d i f  
 }  
  
 / * *   \ b r i e f     S e t   F P E X C  
         \ p a r a m   [ i n ]         f p e x c     F l o a t i n g   P o i n t   E x c e p t i o n   C o n t r o l   v a l u e   t o   s e t  
   * /  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   _ _ s e t _ F P E X C ( u i n t 3 2 _ t   f p e x c )  
 {  
 # i f   ( _ _ F P U _ P R E S E N T   = =   1 )  
     _ _ A S M   v o l a t i l e   ( " V M S R   f p e x c ,   % 0 "   :   :   " r "   ( f p e x c )   :   " m e m o r y " ) ;  
 # e n d i f  
 }  
  
 / *  
   *   I n c l u d e   c o m m o n   c o r e   f u n c t i o n s   t o   a c c e s s   C o p r o c e s s o r   1 5   r e g i s t e r s  
   * /  
  
 # d e f i n e   _ _ g e t _ C P ( c p ,   o p 1 ,   R t ,   C R n ,   C R m ,   o p 2 )   _ _ A S M   v o l a t i l e ( " M R C   p "   #   c p   " ,   "   #   o p 1   " ,   % 0 ,   c "   #   C R n   " ,   c "   #   C R m   " ,   "   #   o p 2   :   " = r "   ( R t )   :   :   " m e m o r y "   )  
 # d e f i n e   _ _ s e t _ C P ( c p ,   o p 1 ,   R t ,   C R n ,   C R m ,   o p 2 )   _ _ A S M   v o l a t i l e ( " M C R   p "   #   c p   " ,   "   #   o p 1   " ,   % 0 ,   c "   #   C R n   " ,   c "   #   C R m   " ,   "   #   o p 2   :   :   " r "   ( R t )   :   " m e m o r y "   )  
 # d e f i n e   _ _ g e t _ C P 6 4 ( c p ,   o p 1 ,   R t ,   C R m )                   _ _ A S M   v o l a t i l e ( " M R R C   p "   #   c p   " ,   "   #   o p 1   " ,   % Q 0 ,   % R 0 ,   c "   #   C R m     :   " = r "   ( R t )   :   :   " m e m o r y "   )  
 # d e f i n e   _ _ s e t _ C P 6 4 ( c p ,   o p 1 ,   R t ,   C R m )                   _ _ A S M   v o l a t i l e ( " M C R R   p "   #   c p   " ,   "   #   o p 1   " ,   % Q 0 ,   % R 0 ,   c "   #   C R m     :   :   " r "   ( R t )   :   " m e m o r y "   )  
  
 # i n c l u d e   " c m s i s _ c p 1 5 . h "  
  
 / * *   \ b r i e f     E n a b l e   F l o a t i n g   P o i n t   U n i t  
  
     C r i t i c a l   s e c t i o n ,   c a l l e d   f r o m   u n d e f   h a n d l e r ,   s o   s y s t i c k   i s   d i s a b l e d  
   * /  
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ F P U _ E n a b l e ( v o i d )  
 {  
     _ _ A S M   v o l a t i l e (  
         / / P e r m i t   a c c e s s   t o   V F P / N E O N ,   r e g i s t e r s   b y   m o d i f y i n g   C P A C R  
         "                 M R C           p 1 5 , 0 , R 1 , c 1 , c 0 , 2     \ n "  
         "                 O R R           R 1 , R 1 , # 0 x 0 0 F 0 0 0 0 0   \ n "  
         "                 M C R           p 1 5 , 0 , R 1 , c 1 , c 0 , 2     \ n "  
  
         / / E n s u r e   t h a t   s u b s e q u e n t   i n s t r u c t i o n s   o c c u r   i n   t h e   c o n t e x t   o f   V F P / N E O N   a c c e s s   p e r m i t t e d  
         "                 I S B                                               \ n "  
  
         / / E n a b l e   V F P / N E O N  
         "                 V M R S         R 1 , F P E X C                     \ n "  
         "                 O R R           R 1 , R 1 , # 0 x 4 0 0 0 0 0 0 0   \ n "  
         "                 V M S R         F P E X C , R 1                     \ n "  
  
         / / I n i t i a l i s e   V F P / N E O N   r e g i s t e r s   t o   0  
         "                 M O V           R 2 , # 0                           \ n "  
  
         / / I n i t i a l i s e   D 1 6   r e g i s t e r s   t o   0  
         "                 V M O V         D 0 ,   R 2 , R 2                   \ n "  
         "                 V M O V         D 1 ,   R 2 , R 2                   \ n "  
         "                 V M O V         D 2 ,   R 2 , R 2                   \ n "  
         "                 V M O V         D 3 ,   R 2 , R 2                   \ n "  
         "                 V M O V         D 4 ,   R 2 , R 2                   \ n "  
         "                 V M O V         D 5 ,   R 2 , R 2                   \ n "  
         "                 V M O V         D 6 ,   R 2 , R 2                   \ n "  
         "                 V M O V         D 7 ,   R 2 , R 2                   \ n "  
         "                 V M O V         D 8 ,   R 2 , R 2                   \ n "  
         "                 V M O V         D 9 ,   R 2 , R 2                   \ n "  
         "                 V M O V         D 1 0 , R 2 , R 2                   \ n "  
         "                 V M O V         D 1 1 , R 2 , R 2                   \ n "  
         "                 V M O V         D 1 2 , R 2 , R 2                   \ n "  
         "                 V M O V         D 1 3 , R 2 , R 2                   \ n "  
         "                 V M O V         D 1 4 , R 2 , R 2                   \ n "  
         "                 V M O V         D 1 5 , R 2 , R 2                   \ n "  
  
 # i f   _ _ A R M _ N E O N   = =   1  
         / / I n i t i a l i s e   D 3 2   r e g i s t e r s   t o   0  
         "                 V M O V         D 1 6 , R 2 , R 2                   \ n "  
         "                 V M O V         D 1 7 , R 2 , R 2                   \ n "  
         "                 V M O V         D 1 8 , R 2 , R 2                   \ n "  
         "                 V M O V         D 1 9 , R 2 , R 2                   \ n "  
         "                 V M O V         D 2 0 , R 2 , R 2                   \ n "  
         "                 V M O V         D 2 1 , R 2 , R 2                   \ n "  
         "                 V M O V         D 2 2 , R 2 , R 2                   \ n "  
         "                 V M O V         D 2 3 , R 2 , R 2                   \ n "  
         "                 V M O V         D 2 4 , R 2 , R 2                   \ n "  
         "                 V M O V         D 2 5 , R 2 , R 2                   \ n "  
         "                 V M O V         D 2 6 , R 2 , R 2                   \ n "  
         "                 V M O V         D 2 7 , R 2 , R 2                   \ n "  
         "                 V M O V         D 2 8 , R 2 , R 2                   \ n "  
         "                 V M O V         D 2 9 , R 2 , R 2                   \ n "  
         "                 V M O V         D 3 0 , R 2 , R 2                   \ n "  
         "                 V M O V         D 3 1 , R 2 , R 2                   \ n "  
 # e n d i f  
  
         / / I n i t i a l i s e   F P S C R   t o   a   k n o w n   s t a t e  
         "                 V M R S         R 2 , F P S C R                     \ n "  
         "                 L D R           R 3 , = 0 x 0 0 0 8 6 0 6 0         \ n "   / / M a s k   o f f   a l l   b i t s   t h a t   d o   n o t   h a v e   t o   b e   p r e s e r v e d .   N o n - p r e s e r v e d   b i t s   c a n / s h o u l d   b e   z e r o .  
         "                 A N D           R 2 , R 2 , R 3                     \ n "  
         "                 V M S R         F P S C R , R 2                         "  
     ) ;  
 }  
  
 # e n d i f   / *   _ _ C M S I S _ A R M C L A N G _ H   * /  