??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * * 
   *   @ f i l e           c m s i s _ a r m c c . h 
   *   @ b r i e f         C M S I S   c o m p i l e r   A R M C C   ( A r m   C o m p i l e r   5 )   h e a d e r   f i l e 
   *   @ v e r s i o n     V 5 . 0 . 4 
   *   @ d a t e           1 0 .   J a n u a r y   2 0 1 8 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 / * 
   *   C o p y r i g h t   ( c )   2 0 0 9 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d . 
   * 
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0 
   * 
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y 
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e . 
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t 
   * 
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0 
   * 
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e 
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T 
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d . 
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d 
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e . 
   * / 
 
 # i f n d e f   _ _ C M S I S _ A R M C C _ H 
 # d e f i n e   _ _ C M S I S _ A R M C C _ H 
 
 
 # i f   d e f i n e d ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   <   4 0 0 6 7 7 ) 
     # e r r o r   " P l e a s e   u s e   A r m   C o m p i l e r   T o o l c h a i n   V 4 . 0 . 6 7 7   o r   l a t e r ! " 
 # e n d i f 
 
 / *   C M S I S   c o m p i l e r   c o n t r o l   a r c h i t e c t u r e   m a c r o s   * / 
 # i f   ( ( d e f i n e d   ( _ _ T A R G E T _ A R C H _ 6 _ M     )   & &   ( _ _ T A R G E T _ A R C H _ 6 _ M       = =   1 ) )   | |   \ 
           ( d e f i n e d   ( _ _ T A R G E T _ A R C H _ 6 S _ M   )   & &   ( _ _ T A R G E T _ A R C H _ 6 S _ M     = =   1 ) )       ) 
     # d e f i n e   _ _ A R M _ A R C H _ 6 M _ _                       1 
 # e n d i f 
 
 # i f   ( d e f i n e d   ( _ _ T A R G E T _ A R C H _ 7 _ M   )   & &   ( _ _ T A R G E T _ A R C H _ 7 _ M     = =   1 ) ) 
     # d e f i n e   _ _ A R M _ A R C H _ 7 M _ _                       1 
 # e n d i f 
 
 # i f   ( d e f i n e d   ( _ _ T A R G E T _ A R C H _ 7 E _ M )   & &   ( _ _ T A R G E T _ A R C H _ 7 E _ M   = =   1 ) ) 
     # d e f i n e   _ _ A R M _ A R C H _ 7 E M _ _                     1 
 # e n d i f 
 
     / *   _ _ A R M _ A R C H _ 8 M _ B A S E _ _     n o t   a p p l i c a b l e   * / 
     / *   _ _ A R M _ A R C H _ 8 M _ M A I N _ _     n o t   a p p l i c a b l e   * / 
 
 
 / *   C M S I S   c o m p i l e r   s p e c i f i c   d e f i n e s   * / 
 # i f n d e f       _ _ A S M 
     # d e f i n e   _ _ A S M                                                                     _ _ a s m 
 # e n d i f 
 # i f n d e f       _ _ I N L I N E 
     # d e f i n e   _ _ I N L I N E                                                               _ _ i n l i n e 
 # e n d i f 
 # i f n d e f       _ _ S T A T I C _ I N L I N E 
     # d e f i n e   _ _ S T A T I C _ I N L I N E                                                 s t a t i c   _ _ i n l i n e 
 # e n d i f 
 # i f n d e f       _ _ S T A T I C _ F O R C E I N L I N E                                   
     # d e f i n e   _ _ S T A T I C _ F O R C E I N L I N E                                       s t a t i c   _ _ f o r c e i n l i n e 
 # e n d i f                       
 # i f n d e f       _ _ N O _ R E T U R N 
     # d e f i n e   _ _ N O _ R E T U R N                                                         _ _ d e c l s p e c ( n o r e t u r n ) 
 # e n d i f 
 # i f n d e f       _ _ U S E D 
     # d e f i n e   _ _ U S E D                                                                   _ _ a t t r i b u t e _ _ ( ( u s e d ) ) 
 # e n d i f 
 # i f n d e f       _ _ W E A K 
     # d e f i n e   _ _ W E A K                                                                   _ _ a t t r i b u t e _ _ ( ( w e a k ) ) 
 # e n d i f 
 # i f n d e f       _ _ P A C K E D 
     # d e f i n e   _ _ P A C K E D                                                               _ _ a t t r i b u t e _ _ ( ( p a c k e d ) ) 
 # e n d i f 
 # i f n d e f       _ _ P A C K E D _ S T R U C T 
     # d e f i n e   _ _ P A C K E D _ S T R U C T                                                 _ _ p a c k e d   s t r u c t 
 # e n d i f 
 # i f n d e f       _ _ P A C K E D _ U N I O N 
     # d e f i n e   _ _ P A C K E D _ U N I O N                                                   _ _ p a c k e d   u n i o n 
 # e n d i f 
 # i f n d e f       _ _ U N A L I G N E D _ U I N T 3 2                 / *   d e p r e c a t e d   * / 
     # d e f i n e   _ _ U N A L I G N E D _ U I N T 3 2 ( x )                                     ( * ( ( _ _ p a c k e d   u i n t 3 2 _ t   * ) ( x ) ) ) 
 # e n d i f 
 # i f n d e f       _ _ U N A L I G N E D _ U I N T 1 6 _ W R I T E 
     # d e f i n e   _ _ U N A L I G N E D _ U I N T 1 6 _ W R I T E ( a d d r ,   v a l )         ( ( * ( ( _ _ p a c k e d   u i n t 1 6 _ t   * ) ( a d d r ) ) )   =   ( v a l ) ) 
 # e n d i f 
 # i f n d e f       _ _ U N A L I G N E D _ U I N T 1 6 _ R E A D 
     # d e f i n e   _ _ U N A L I G N E D _ U I N T 1 6 _ R E A D ( a d d r )                     ( * ( ( c o n s t   _ _ p a c k e d   u i n t 1 6 _ t   * ) ( a d d r ) ) ) 
 # e n d i f 
 # i f n d e f       _ _ U N A L I G N E D _ U I N T 3 2 _ W R I T E 
     # d e f i n e   _ _ U N A L I G N E D _ U I N T 3 2 _ W R I T E ( a d d r ,   v a l )         ( ( * ( ( _ _ p a c k e d   u i n t 3 2 _ t   * ) ( a d d r ) ) )   =   ( v a l ) ) 
 # e n d i f 
 # i f n d e f       _ _ U N A L I G N E D _ U I N T 3 2 _ R E A D 
     # d e f i n e   _ _ U N A L I G N E D _ U I N T 3 2 _ R E A D ( a d d r )                     ( * ( ( c o n s t   _ _ p a c k e d   u i n t 3 2 _ t   * ) ( a d d r ) ) ) 
 # e n d i f 
 # i f n d e f       _ _ A L I G N E D 
     # d e f i n e   _ _ A L I G N E D ( x )                                                       _ _ a t t r i b u t e _ _ ( ( a l i g n e d ( x ) ) ) 
 # e n d i f 
 # i f n d e f       _ _ R E S T R I C T 
     # d e f i n e   _ _ R E S T R I C T                                                           _ _ r e s t r i c t 
 # e n d i f 
 
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # # #     C o r e   F u n c t i o n   A c c e s s     # # # # # # # # # # # # # # # # # # # # # # # # # # #   * / 
 / * *   \ i n g r o u p     C M S I S _ C o r e _ F u n c t i o n I n t e r f a c e 
         \ d e f g r o u p   C M S I S _ C o r e _ R e g A c c F u n c t i o n s   C M S I S   C o r e   R e g i s t e r   A c c e s s   F u n c t i o n s 
     @ { 
   * / 
 
 / * * 
     \ b r i e f       E n a b l e   I R Q   I n t e r r u p t s 
     \ d e t a i l s   E n a b l e s   I R Q   i n t e r r u p t s   b y   c l e a r i n g   t h e   I - b i t   i n   t h e   C P S R . 
                       C a n   o n l y   b e   e x e c u t e d   i n   P r i v i l e g e d   m o d e s . 
   * / 
 / *   i n t r i n s i c   v o i d   _ _ e n a b l e _ i r q ( ) ;           * / 
 
 
 / * * 
     \ b r i e f       D i s a b l e   I R Q   I n t e r r u p t s 
     \ d e t a i l s   D i s a b l e s   I R Q   i n t e r r u p t s   b y   s e t t i n g   t h e   I - b i t   i n   t h e   C P S R . 
                       C a n   o n l y   b e   e x e c u t e d   i n   P r i v i l e g e d   m o d e s . 
   * / 
 / *   i n t r i n s i c   v o i d   _ _ d i s a b l e _ i r q ( ) ;         * / 
 
 / * * 
     \ b r i e f       G e t   C o n t r o l   R e g i s t e r 
     \ d e t a i l s   R e t u r n s   t h e   c o n t e n t   o f   t h e   C o n t r o l   R e g i s t e r . 
     \ r e t u r n                               C o n t r o l   R e g i s t e r   v a l u e 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ g e t _ C O N T R O L ( v o i d ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g C o n t r o l                   _ _ A S M ( " c o n t r o l " ) ; 
     r e t u r n ( _ _ r e g C o n t r o l ) ; 
 } 
 
 
 / * * 
     \ b r i e f       S e t   C o n t r o l   R e g i s t e r 
     \ d e t a i l s   W r i t e s   t h e   g i v e n   v a l u e   t o   t h e   C o n t r o l   R e g i s t e r . 
     \ p a r a m   [ i n ]         c o n t r o l     C o n t r o l   R e g i s t e r   v a l u e   t o   s e t 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ s e t _ C O N T R O L ( u i n t 3 2 _ t   c o n t r o l ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g C o n t r o l                   _ _ A S M ( " c o n t r o l " ) ; 
     _ _ r e g C o n t r o l   =   c o n t r o l ; 
 } 
 
 
 / * * 
     \ b r i e f       G e t   I P S R   R e g i s t e r 
     \ d e t a i l s   R e t u r n s   t h e   c o n t e n t   o f   t h e   I P S R   R e g i s t e r . 
     \ r e t u r n                               I P S R   R e g i s t e r   v a l u e 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ g e t _ I P S R ( v o i d ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g I P S R                     _ _ A S M ( " i p s r " ) ; 
     r e t u r n ( _ _ r e g I P S R ) ; 
 } 
 
 
 / * * 
     \ b r i e f       G e t   A P S R   R e g i s t e r 
     \ d e t a i l s   R e t u r n s   t h e   c o n t e n t   o f   t h e   A P S R   R e g i s t e r . 
     \ r e t u r n                               A P S R   R e g i s t e r   v a l u e 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ g e t _ A P S R ( v o i d ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g A P S R                     _ _ A S M ( " a p s r " ) ; 
     r e t u r n ( _ _ r e g A P S R ) ; 
 } 
 
 
 / * * 
     \ b r i e f       G e t   x P S R   R e g i s t e r 
     \ d e t a i l s   R e t u r n s   t h e   c o n t e n t   o f   t h e   x P S R   R e g i s t e r . 
     \ r e t u r n                               x P S R   R e g i s t e r   v a l u e 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ g e t _ x P S R ( v o i d ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g X P S R                     _ _ A S M ( " x p s r " ) ; 
     r e t u r n ( _ _ r e g X P S R ) ; 
 } 
 
 
 / * * 
     \ b r i e f       G e t   P r o c e s s   S t a c k   P o i n t e r 
     \ d e t a i l s   R e t u r n s   t h e   c u r r e n t   v a l u e   o f   t h e   P r o c e s s   S t a c k   P o i n t e r   ( P S P ) . 
     \ r e t u r n                               P S P   R e g i s t e r   v a l u e 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ g e t _ P S P ( v o i d ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g P r o c e s s S t a c k P o i n t e r     _ _ A S M ( " p s p " ) ; 
     r e t u r n ( _ _ r e g P r o c e s s S t a c k P o i n t e r ) ; 
 } 
 
 
 / * * 
     \ b r i e f       S e t   P r o c e s s   S t a c k   P o i n t e r 
     \ d e t a i l s   A s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   P r o c e s s   S t a c k   P o i n t e r   ( P S P ) . 
     \ p a r a m   [ i n ]         t o p O f P r o c S t a c k     P r o c e s s   S t a c k   P o i n t e r   v a l u e   t o   s e t 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ s e t _ P S P ( u i n t 3 2 _ t   t o p O f P r o c S t a c k ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g P r o c e s s S t a c k P o i n t e r     _ _ A S M ( " p s p " ) ; 
     _ _ r e g P r o c e s s S t a c k P o i n t e r   =   t o p O f P r o c S t a c k ; 
 } 
 
 
 / * * 
     \ b r i e f       G e t   M a i n   S t a c k   P o i n t e r 
     \ d e t a i l s   R e t u r n s   t h e   c u r r e n t   v a l u e   o f   t h e   M a i n   S t a c k   P o i n t e r   ( M S P ) . 
     \ r e t u r n                               M S P   R e g i s t e r   v a l u e 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ g e t _ M S P ( v o i d ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g M a i n S t a c k P o i n t e r           _ _ A S M ( " m s p " ) ; 
     r e t u r n ( _ _ r e g M a i n S t a c k P o i n t e r ) ; 
 } 
 
 
 / * * 
     \ b r i e f       S e t   M a i n   S t a c k   P o i n t e r 
     \ d e t a i l s   A s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   M a i n   S t a c k   P o i n t e r   ( M S P ) . 
     \ p a r a m   [ i n ]         t o p O f M a i n S t a c k     M a i n   S t a c k   P o i n t e r   v a l u e   t o   s e t 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ s e t _ M S P ( u i n t 3 2 _ t   t o p O f M a i n S t a c k ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g M a i n S t a c k P o i n t e r           _ _ A S M ( " m s p " ) ; 
     _ _ r e g M a i n S t a c k P o i n t e r   =   t o p O f M a i n S t a c k ; 
 } 
 
 
 / * * 
     \ b r i e f       G e t   P r i o r i t y   M a s k 
     \ d e t a i l s   R e t u r n s   t h e   c u r r e n t   s t a t e   o f   t h e   p r i o r i t y   m a s k   b i t   f r o m   t h e   P r i o r i t y   M a s k   R e g i s t e r . 
     \ r e t u r n                               P r i o r i t y   M a s k   v a l u e 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ g e t _ P R I M A S K ( v o i d ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g P r i M a s k                   _ _ A S M ( " p r i m a s k " ) ; 
     r e t u r n ( _ _ r e g P r i M a s k ) ; 
 } 
 
 
 / * * 
     \ b r i e f       S e t   P r i o r i t y   M a s k 
     \ d e t a i l s   A s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   P r i o r i t y   M a s k   R e g i s t e r . 
     \ p a r a m   [ i n ]         p r i M a s k     P r i o r i t y   M a s k 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ s e t _ P R I M A S K ( u i n t 3 2 _ t   p r i M a s k ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g P r i M a s k                   _ _ A S M ( " p r i m a s k " ) ; 
     _ _ r e g P r i M a s k   =   ( p r i M a s k ) ; 
 } 
 
 
 # i f   ( ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 M _ _   )   & &   ( _ _ A R M _ A R C H _ 7 M _ _     = =   1 ) )   | |   \ 
           ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 E M _ _ )   & &   ( _ _ A R M _ A R C H _ 7 E M _ _   = =   1 ) )           ) 
 
 / * * 
     \ b r i e f       E n a b l e   F I Q 
     \ d e t a i l s   E n a b l e s   F I Q   i n t e r r u p t s   b y   c l e a r i n g   t h e   F - b i t   i n   t h e   C P S R . 
                       C a n   o n l y   b e   e x e c u t e d   i n   P r i v i l e g e d   m o d e s . 
   * / 
 # d e f i n e   _ _ e n a b l e _ f a u l t _ i r q                                 _ _ e n a b l e _ f i q 
 
 
 / * * 
     \ b r i e f       D i s a b l e   F I Q 
     \ d e t a i l s   D i s a b l e s   F I Q   i n t e r r u p t s   b y   s e t t i n g   t h e   F - b i t   i n   t h e   C P S R . 
                       C a n   o n l y   b e   e x e c u t e d   i n   P r i v i l e g e d   m o d e s . 
   * / 
 # d e f i n e   _ _ d i s a b l e _ f a u l t _ i r q                               _ _ d i s a b l e _ f i q 
 
 
 / * * 
     \ b r i e f       G e t   B a s e   P r i o r i t y 
     \ d e t a i l s   R e t u r n s   t h e   c u r r e n t   v a l u e   o f   t h e   B a s e   P r i o r i t y   r e g i s t e r . 
     \ r e t u r n                               B a s e   P r i o r i t y   r e g i s t e r   v a l u e 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t     _ _ g e t _ B A S E P R I ( v o i d ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g B a s e P r i                   _ _ A S M ( " b a s e p r i " ) ; 
     r e t u r n ( _ _ r e g B a s e P r i ) ; 
 } 
 
 
 / * * 
     \ b r i e f       S e t   B a s e   P r i o r i t y 
     \ d e t a i l s   A s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   B a s e   P r i o r i t y   r e g i s t e r . 
     \ p a r a m   [ i n ]         b a s e P r i     B a s e   P r i o r i t y   v a l u e   t o   s e t 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ s e t _ B A S E P R I ( u i n t 3 2 _ t   b a s e P r i ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g B a s e P r i                   _ _ A S M ( " b a s e p r i " ) ; 
     _ _ r e g B a s e P r i   =   ( b a s e P r i   &   0 x F F U ) ; 
 } 
 
 
 / * * 
     \ b r i e f       S e t   B a s e   P r i o r i t y   w i t h   c o n d i t i o n 
     \ d e t a i l s   A s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   B a s e   P r i o r i t y   r e g i s t e r   o n l y   i f   B A S E P R I   m a s k i n g   i s   d i s a b l e d , 
                       o r   t h e   n e w   v a l u e   i n c r e a s e s   t h e   B A S E P R I   p r i o r i t y   l e v e l . 
     \ p a r a m   [ i n ]         b a s e P r i     B a s e   P r i o r i t y   v a l u e   t o   s e t 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ s e t _ B A S E P R I _ M A X ( u i n t 3 2 _ t   b a s e P r i ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g B a s e P r i M a x             _ _ A S M ( " b a s e p r i _ m a x " ) ; 
     _ _ r e g B a s e P r i M a x   =   ( b a s e P r i   &   0 x F F U ) ; 
 } 
 
 
 / * * 
     \ b r i e f       G e t   F a u l t   M a s k 
     \ d e t a i l s   R e t u r n s   t h e   c u r r e n t   v a l u e   o f   t h e   F a u l t   M a s k   r e g i s t e r . 
     \ r e t u r n                               F a u l t   M a s k   r e g i s t e r   v a l u e 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ g e t _ F A U L T M A S K ( v o i d ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g F a u l t M a s k               _ _ A S M ( " f a u l t m a s k " ) ; 
     r e t u r n ( _ _ r e g F a u l t M a s k ) ; 
 } 
 
 
 / * * 
     \ b r i e f       S e t   F a u l t   M a s k 
     \ d e t a i l s   A s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   F a u l t   M a s k   r e g i s t e r . 
     \ p a r a m   [ i n ]         f a u l t M a s k     F a u l t   M a s k   v a l u e   t o   s e t 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ s e t _ F A U L T M A S K ( u i n t 3 2 _ t   f a u l t M a s k ) 
 { 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g F a u l t M a s k               _ _ A S M ( " f a u l t m a s k " ) ; 
     _ _ r e g F a u l t M a s k   =   ( f a u l t M a s k   &   ( u i n t 3 2 _ t ) 1 U ) ; 
 } 
 
 # e n d i f   / *   ( ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 M _ _   )   & &   ( _ _ A R M _ A R C H _ 7 M _ _     = =   1 ) )   | |   \ 
                       ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 E M _ _ )   & &   ( _ _ A R M _ A R C H _ 7 E M _ _   = =   1 ) )           )   * / 
 
 
 / * * 
     \ b r i e f       G e t   F P S C R 
     \ d e t a i l s   R e t u r n s   t h e   c u r r e n t   v a l u e   o f   t h e   F l o a t i n g   P o i n t   S t a t u s / C o n t r o l   r e g i s t e r . 
     \ r e t u r n                               F l o a t i n g   P o i n t   S t a t u s / C o n t r o l   r e g i s t e r   v a l u e 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ g e t _ F P S C R ( v o i d ) 
 { 
 # i f   ( ( d e f i n e d   ( _ _ F P U _ P R E S E N T )   & &   ( _ _ F P U _ P R E S E N T   = =   1 U ) )   & &   \ 
           ( d e f i n e d   ( _ _ F P U _ U S E D       )   & &   ( _ _ F P U _ U S E D         = =   1 U ) )           ) 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g f p s c r                   _ _ A S M ( " f p s c r " ) ; 
     r e t u r n ( _ _ r e g f p s c r ) ; 
 # e l s e 
       r e t u r n ( 0 U ) ; 
 # e n d i f 
 } 
 
 
 / * * 
     \ b r i e f       S e t   F P S C R 
     \ d e t a i l s   A s s i g n s   t h e   g i v e n   v a l u e   t o   t h e   F l o a t i n g   P o i n t   S t a t u s / C o n t r o l   r e g i s t e r . 
     \ p a r a m   [ i n ]         f p s c r     F l o a t i n g   P o i n t   S t a t u s / C o n t r o l   v a l u e   t o   s e t 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ s e t _ F P S C R ( u i n t 3 2 _ t   f p s c r ) 
 { 
 # i f   ( ( d e f i n e d   ( _ _ F P U _ P R E S E N T )   & &   ( _ _ F P U _ P R E S E N T   = =   1 U ) )   & &   \ 
           ( d e f i n e d   ( _ _ F P U _ U S E D       )   & &   ( _ _ F P U _ U S E D         = =   1 U ) )           ) 
     r e g i s t e r   u i n t 3 2 _ t   _ _ r e g f p s c r                   _ _ A S M ( " f p s c r " ) ; 
     _ _ r e g f p s c r   =   ( f p s c r ) ; 
 # e l s e 
     ( v o i d ) f p s c r ; 
 # e n d i f 
 } 
 
 
 / * @ }   e n d   o f   C M S I S _ C o r e _ R e g A c c F u n c t i o n s   * / 
 
 
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # #     C o r e   I n s t r u c t i o n   A c c e s s     # # # # # # # # # # # # # # # # # # # # # # # # #   * / 
 / * *   \ d e f g r o u p   C M S I S _ C o r e _ I n s t r u c t i o n I n t e r f a c e   C M S I S   C o r e   I n s t r u c t i o n   I n t e r f a c e 
     A c c e s s   t o   d e d i c a t e d   i n s t r u c t i o n s 
     @ { 
 * / 
 
 / * * 
     \ b r i e f       N o   O p e r a t i o n 
     \ d e t a i l s   N o   O p e r a t i o n   d o e s   n o t h i n g .   T h i s   i n s t r u c t i o n   c a n   b e   u s e d   f o r   c o d e   a l i g n m e n t   p u r p o s e s . 
   * / 
 # d e f i n e   _ _ N O P                                                           _ _ n o p 
 
 
 / * * 
     \ b r i e f       W a i t   F o r   I n t e r r u p t 
     \ d e t a i l s   W a i t   F o r   I n t e r r u p t   i s   a   h i n t   i n s t r u c t i o n   t h a t   s u s p e n d s   e x e c u t i o n   u n t i l   o n e   o f   a   n u m b e r   o f   e v e n t s   o c c u r s . 
   * / 
 # d e f i n e   _ _ W F I                                                           _ _ w f i 
 
 
 / * * 
     \ b r i e f       W a i t   F o r   E v e n t 
     \ d e t a i l s   W a i t   F o r   E v e n t   i s   a   h i n t   i n s t r u c t i o n   t h a t   p e r m i t s   t h e   p r o c e s s o r   t o   e n t e r 
                       a   l o w - p o w e r   s t a t e   u n t i l   o n e   o f   a   n u m b e r   o f   e v e n t s   o c c u r s . 
   * / 
 # d e f i n e   _ _ W F E                                                           _ _ w f e 
 
 
 / * * 
     \ b r i e f       S e n d   E v e n t 
     \ d e t a i l s   S e n d   E v e n t   i s   a   h i n t   i n s t r u c t i o n .   I t   c a u s e s   a n   e v e n t   t o   b e   s i g n a l e d   t o   t h e   C P U . 
   * / 
 # d e f i n e   _ _ S E V                                                           _ _ s e v 
 
 
 / * * 
     \ b r i e f       I n s t r u c t i o n   S y n c h r o n i z a t i o n   B a r r i e r 
     \ d e t a i l s   I n s t r u c t i o n   S y n c h r o n i z a t i o n   B a r r i e r   f l u s h e s   t h e   p i p e l i n e   i n   t h e   p r o c e s s o r , 
                       s o   t h a t   a l l   i n s t r u c t i o n s   f o l l o w i n g   t h e   I S B   a r e   f e t c h e d   f r o m   c a c h e   o r   m e m o r y , 
                       a f t e r   t h e   i n s t r u c t i o n   h a s   b e e n   c o m p l e t e d . 
   * / 
 # d e f i n e   _ _ I S B ( )   d o   { \ 
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \ 
                                       _ _ i s b ( 0 x F ) ; \ 
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \ 
                                 }   w h i l e   ( 0 U ) 
 
 / * * 
     \ b r i e f       D a t a   S y n c h r o n i z a t i o n   B a r r i e r 
     \ d e t a i l s   A c t s   a s   a   s p e c i a l   k i n d   o f   D a t a   M e m o r y   B a r r i e r . 
                       I t   c o m p l e t e s   w h e n   a l l   e x p l i c i t   m e m o r y   a c c e s s e s   b e f o r e   t h i s   i n s t r u c t i o n   c o m p l e t e . 
   * / 
 # d e f i n e   _ _ D S B ( )   d o   { \ 
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \ 
                                       _ _ d s b ( 0 x F ) ; \ 
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \ 
                                 }   w h i l e   ( 0 U ) 
 
 / * * 
     \ b r i e f       D a t a   M e m o r y   B a r r i e r 
     \ d e t a i l s   E n s u r e s   t h e   a p p a r e n t   o r d e r   o f   t h e   e x p l i c i t   m e m o r y   o p e r a t i o n s   b e f o r e 
                       a n d   a f t e r   t h e   i n s t r u c t i o n ,   w i t h o u t   e n s u r i n g   t h e i r   c o m p l e t i o n . 
   * / 
 # d e f i n e   _ _ D M B ( )   d o   { \ 
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \ 
                                       _ _ d m b ( 0 x F ) ; \ 
                                       _ _ s c h e d u l e _ b a r r i e r ( ) ; \ 
                                 }   w h i l e   ( 0 U ) 
 
                                     
 / * * 
     \ b r i e f       R e v e r s e   b y t e   o r d e r   ( 3 2   b i t ) 
     \ d e t a i l s   R e v e r s e s   t h e   b y t e   o r d e r   i n   u n s i g n e d   i n t e g e r   v a l u e .   F o r   e x a m p l e ,   0 x 1 2 3 4 5 6 7 8   b e c o m e s   0 x 7 8 5 6 3 4 1 2 . 
     \ p a r a m   [ i n ]         v a l u e     V a l u e   t o   r e v e r s e 
     \ r e t u r n                               R e v e r s e d   v a l u e 
   * / 
 # d e f i n e   _ _ R E V                                                           _ _ r e v 
 
 
 / * * 
     \ b r i e f       R e v e r s e   b y t e   o r d e r   ( 1 6   b i t ) 
     \ d e t a i l s   R e v e r s e s   t h e   b y t e   o r d e r   w i t h i n   e a c h   h a l f w o r d   o f   a   w o r d .   F o r   e x a m p l e ,   0 x 1 2 3 4 5 6 7 8   b e c o m e s   0 x 3 4 1 2 7 8 5 6 . 
     \ p a r a m   [ i n ]         v a l u e     V a l u e   t o   r e v e r s e 
     \ r e t u r n                               R e v e r s e d   v a l u e 
   * / 
 # i f n d e f   _ _ N O _ E M B E D D E D _ A S M 
 _ _ a t t r i b u t e _ _ ( ( s e c t i o n ( " . r e v 1 6 _ t e x t " ) ) )   _ _ S T A T I C _ I N L I N E   _ _ A S M   u i n t 3 2 _ t   _ _ R E V 1 6 ( u i n t 3 2 _ t   v a l u e ) 
 { 
     r e v 1 6   r 0 ,   r 0 
     b x   l r 
 } 
 # e n d i f 
 
 
 / * * 
     \ b r i e f       R e v e r s e   b y t e   o r d e r   ( 1 6   b i t ) 
     \ d e t a i l s   R e v e r s e s   t h e   b y t e   o r d e r   i n   a   1 6 - b i t   v a l u e   a n d   r e t u r n s   t h e   s i g n e d   1 6 - b i t   r e s u l t .   F o r   e x a m p l e ,   0 x 0 0 8 0   b e c o m e s   0 x 8 0 0 0 . 
     \ p a r a m   [ i n ]         v a l u e     V a l u e   t o   r e v e r s e 
     \ r e t u r n                               R e v e r s e d   v a l u e 
   * / 
 # i f n d e f   _ _ N O _ E M B E D D E D _ A S M 
 _ _ a t t r i b u t e _ _ ( ( s e c t i o n ( " . r e v s h _ t e x t " ) ) )   _ _ S T A T I C _ I N L I N E   _ _ A S M   i n t 1 6 _ t   _ _ R E V S H ( i n t 1 6 _ t   v a l u e ) 
 { 
     r e v s h   r 0 ,   r 0 
     b x   l r 
 } 
 # e n d i f 
 
 
 / * * 
     \ b r i e f       R o t a t e   R i g h t   i n   u n s i g n e d   v a l u e   ( 3 2   b i t ) 
     \ d e t a i l s   R o t a t e   R i g h t   ( i m m e d i a t e )   p r o v i d e s   t h e   v a l u e   o f   t h e   c o n t e n t s   o f   a   r e g i s t e r   r o t a t e d   b y   a   v a r i a b l e   n u m b e r   o f   b i t s . 
     \ p a r a m   [ i n ]         o p 1     V a l u e   t o   r o t a t e 
     \ p a r a m   [ i n ]         o p 2     N u m b e r   o f   B i t s   t o   r o t a t e 
     \ r e t u r n                               R o t a t e d   v a l u e 
   * / 
 # d e f i n e   _ _ R O R                                                           _ _ r o r 
 
 
 / * * 
     \ b r i e f       B r e a k p o i n t 
     \ d e t a i l s   C a u s e s   t h e   p r o c e s s o r   t o   e n t e r   D e b u g   s t a t e . 
                       D e b u g   t o o l s   c a n   u s e   t h i s   t o   i n v e s t i g a t e   s y s t e m   s t a t e   w h e n   t h e   i n s t r u c t i o n   a t   a   p a r t i c u l a r   a d d r e s s   i s   r e a c h e d . 
     \ p a r a m   [ i n ]         v a l u e     i s   i g n o r e d   b y   t h e   p r o c e s s o r . 
                                   I f   r e q u i r e d ,   a   d e b u g g e r   c a n   u s e   i t   t o   s t o r e   a d d i t i o n a l   i n f o r m a t i o n   a b o u t   t h e   b r e a k p o i n t . 
   * / 
 # d e f i n e   _ _ B K P T ( v a l u e )                                               _ _ b r e a k p o i n t ( v a l u e ) 
 
 
 / * * 
     \ b r i e f       R e v e r s e   b i t   o r d e r   o f   v a l u e 
     \ d e t a i l s   R e v e r s e s   t h e   b i t   o r d e r   o f   t h e   g i v e n   v a l u e . 
     \ p a r a m   [ i n ]         v a l u e     V a l u e   t o   r e v e r s e 
     \ r e t u r n                               R e v e r s e d   v a l u e 
   * / 
 # i f   ( ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 M _ _   )   & &   ( _ _ A R M _ A R C H _ 7 M _ _     = =   1 ) )   | |   \ 
           ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 E M _ _ )   & &   ( _ _ A R M _ A R C H _ 7 E M _ _   = =   1 ) )           ) 
     # d e f i n e   _ _ R B I T                                                     _ _ r b i t 
 # e l s e 
 _ _ a t t r i b u t e _ _ ( ( a l w a y s _ i n l i n e ) )   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ R B I T ( u i n t 3 2 _ t   v a l u e ) 
 { 
     u i n t 3 2 _ t   r e s u l t ; 
     u i n t 3 2 _ t   s   =   ( 4 U   / * s i z e o f ( v ) * /   *   8 U )   -   1 U ;   / *   e x t r a   s h i f t   n e e d e d   a t   e n d   * / 
 
     r e s u l t   =   v a l u e ;                                             / *   r   w i l l   b e   r e v e r s e d   b i t s   o f   v ;   f i r s t   g e t   L S B   o f   v   * / 
     f o r   ( v a l u e   > > =   1 U ;   v a l u e   ! =   0 U ;   v a l u e   > > =   1 U ) 
     { 
         r e s u l t   < < =   1 U ; 
         r e s u l t   | =   v a l u e   &   1 U ; 
         s - - ; 
     } 
     r e s u l t   < < =   s ;                                                 / *   s h i f t   w h e n   v ' s   h i g h e s t   b i t s   a r e   z e r o   * / 
     r e t u r n   r e s u l t ; 
 } 
 # e n d i f 
 
 
 / * * 
     \ b r i e f       C o u n t   l e a d i n g   z e r o s 
     \ d e t a i l s   C o u n t s   t h e   n u m b e r   o f   l e a d i n g   z e r o s   o f   a   d a t a   v a l u e . 
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   c o u n t   t h e   l e a d i n g   z e r o s 
     \ r e t u r n                           n u m b e r   o f   l e a d i n g   z e r o s   i n   v a l u e 
   * / 
 # d e f i n e   _ _ C L Z                                                           _ _ c l z 
 
 
 # i f   ( ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 M _ _   )   & &   ( _ _ A R M _ A R C H _ 7 M _ _     = =   1 ) )   | |   \ 
           ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 E M _ _ )   & &   ( _ _ A R M _ A R C H _ 7 E M _ _   = =   1 ) )           ) 
 
 / * * 
     \ b r i e f       L D R   E x c l u s i v e   ( 8   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   L D R   i n s t r u c t i o n   f o r   8   b i t   v a l u e . 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   d a t a 
     \ r e t u r n                           v a l u e   o f   t y p e   u i n t 8 _ t   a t   ( * p t r ) 
   * / 
 # i f   d e f i n e d ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   <   5 0 6 0 0 2 0 ) 
     # d e f i n e   _ _ L D R E X B ( p t r )                                                                                                                 ( ( u i n t 8 _ t   )   _ _ l d r e x ( p t r ) ) 
 # e l s e 
     # d e f i n e   _ _ L D R E X B ( p t r )                     _ P r a g m a ( " p u s h " )   _ P r a g m a ( " d i a g _ s u p p r e s s   3 7 3 1 " )   ( ( u i n t 8 _ t   )   _ _ l d r e x ( p t r ) )     _ P r a g m a ( " p o p " ) 
 # e n d i f 
 
 
 / * * 
     \ b r i e f       L D R   E x c l u s i v e   ( 1 6   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   L D R   i n s t r u c t i o n   f o r   1 6   b i t   v a l u e s . 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   d a t a 
     \ r e t u r n                 v a l u e   o f   t y p e   u i n t 1 6 _ t   a t   ( * p t r ) 
   * / 
 # i f   d e f i n e d ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   <   5 0 6 0 0 2 0 ) 
     # d e f i n e   _ _ L D R E X H ( p t r )                                                                                                                 ( ( u i n t 1 6 _ t )   _ _ l d r e x ( p t r ) ) 
 # e l s e 
     # d e f i n e   _ _ L D R E X H ( p t r )                     _ P r a g m a ( " p u s h " )   _ P r a g m a ( " d i a g _ s u p p r e s s   3 7 3 1 " )   ( ( u i n t 1 6 _ t )   _ _ l d r e x ( p t r ) )     _ P r a g m a ( " p o p " ) 
 # e n d i f 
 
 
 / * * 
     \ b r i e f       L D R   E x c l u s i v e   ( 3 2   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   L D R   i n s t r u c t i o n   f o r   3 2   b i t   v a l u e s . 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   d a t a 
     \ r e t u r n                 v a l u e   o f   t y p e   u i n t 3 2 _ t   a t   ( * p t r ) 
   * / 
 # i f   d e f i n e d ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   <   5 0 6 0 0 2 0 ) 
     # d e f i n e   _ _ L D R E X W ( p t r )                                                                                                                 ( ( u i n t 3 2 _ t   )   _ _ l d r e x ( p t r ) ) 
 # e l s e 
     # d e f i n e   _ _ L D R E X W ( p t r )                     _ P r a g m a ( " p u s h " )   _ P r a g m a ( " d i a g _ s u p p r e s s   3 7 3 1 " )   ( ( u i n t 3 2 _ t   )   _ _ l d r e x ( p t r ) )     _ P r a g m a ( " p o p " ) 
 # e n d i f 
 
 
 / * * 
     \ b r i e f       S T R   E x c l u s i v e   ( 8   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   S T R   i n s t r u c t i o n   f o r   8   b i t   v a l u e s . 
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   s t o r e 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   l o c a t i o n 
     \ r e t u r n                     0     F u n c t i o n   s u c c e e d e d 
     \ r e t u r n                     1     F u n c t i o n   f a i l e d 
   * / 
 # i f   d e f i n e d ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   <   5 0 6 0 0 2 0 ) 
     # d e f i n e   _ _ S T R E X B ( v a l u e ,   p t r )                                                                                                   _ _ s t r e x ( v a l u e ,   p t r ) 
 # e l s e 
     # d e f i n e   _ _ S T R E X B ( v a l u e ,   p t r )       _ P r a g m a ( " p u s h " )   _ P r a g m a ( " d i a g _ s u p p r e s s   3 7 3 1 " )   _ _ s t r e x ( v a l u e ,   p t r )                 _ P r a g m a ( " p o p " ) 
 # e n d i f 
 
 
 / * * 
     \ b r i e f       S T R   E x c l u s i v e   ( 1 6   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   S T R   i n s t r u c t i o n   f o r   1 6   b i t   v a l u e s . 
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   s t o r e 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   l o c a t i o n 
     \ r e t u r n                     0     F u n c t i o n   s u c c e e d e d 
     \ r e t u r n                     1     F u n c t i o n   f a i l e d 
   * / 
 # i f   d e f i n e d ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   <   5 0 6 0 0 2 0 ) 
     # d e f i n e   _ _ S T R E X H ( v a l u e ,   p t r )                                                                                                   _ _ s t r e x ( v a l u e ,   p t r ) 
 # e l s e 
     # d e f i n e   _ _ S T R E X H ( v a l u e ,   p t r )       _ P r a g m a ( " p u s h " )   _ P r a g m a ( " d i a g _ s u p p r e s s   3 7 3 1 " )   _ _ s t r e x ( v a l u e ,   p t r )                 _ P r a g m a ( " p o p " ) 
 # e n d i f 
 
 
 / * * 
     \ b r i e f       S T R   E x c l u s i v e   ( 3 2   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   e x c l u s i v e   S T R   i n s t r u c t i o n   f o r   3 2   b i t   v a l u e s . 
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   s t o r e 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   l o c a t i o n 
     \ r e t u r n                     0     F u n c t i o n   s u c c e e d e d 
     \ r e t u r n                     1     F u n c t i o n   f a i l e d 
   * / 
 # i f   d e f i n e d ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   <   5 0 6 0 0 2 0 ) 
     # d e f i n e   _ _ S T R E X W ( v a l u e ,   p t r )                                                                                                   _ _ s t r e x ( v a l u e ,   p t r ) 
 # e l s e 
     # d e f i n e   _ _ S T R E X W ( v a l u e ,   p t r )       _ P r a g m a ( " p u s h " )   _ P r a g m a ( " d i a g _ s u p p r e s s   3 7 3 1 " )   _ _ s t r e x ( v a l u e ,   p t r )                 _ P r a g m a ( " p o p " ) 
 # e n d i f 
 
 
 / * * 
     \ b r i e f       R e m o v e   t h e   e x c l u s i v e   l o c k 
     \ d e t a i l s   R e m o v e s   t h e   e x c l u s i v e   l o c k   w h i c h   i s   c r e a t e d   b y   L D R E X . 
   * / 
 # d e f i n e   _ _ C L R E X                                                       _ _ c l r e x 
 
 
 / * * 
     \ b r i e f       S i g n e d   S a t u r a t e 
     \ d e t a i l s   S a t u r a t e s   a   s i g n e d   v a l u e . 
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   b e   s a t u r a t e d 
     \ p a r a m   [ i n ]         s a t     B i t   p o s i t i o n   t o   s a t u r a t e   t o   ( 1 . . 3 2 ) 
     \ r e t u r n                           S a t u r a t e d   v a l u e 
   * / 
 # d e f i n e   _ _ S S A T                                                         _ _ s s a t 
 
 
 / * * 
     \ b r i e f       U n s i g n e d   S a t u r a t e 
     \ d e t a i l s   S a t u r a t e s   a n   u n s i g n e d   v a l u e . 
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   b e   s a t u r a t e d 
     \ p a r a m   [ i n ]         s a t     B i t   p o s i t i o n   t o   s a t u r a t e   t o   ( 0 . . 3 1 ) 
     \ r e t u r n                           S a t u r a t e d   v a l u e 
   * / 
 # d e f i n e   _ _ U S A T                                                         _ _ u s a t 
 
 
 / * * 
     \ b r i e f       R o t a t e   R i g h t   w i t h   E x t e n d   ( 3 2   b i t ) 
     \ d e t a i l s   M o v e s   e a c h   b i t   o f   a   b i t s t r i n g   r i g h t   b y   o n e   b i t . 
                       T h e   c a r r y   i n p u t   i s   s h i f t e d   i n   a t   t h e   l e f t   e n d   o f   t h e   b i t s t r i n g . 
     \ p a r a m   [ i n ]         v a l u e     V a l u e   t o   r o t a t e 
     \ r e t u r n                               R o t a t e d   v a l u e 
   * / 
 # i f n d e f   _ _ N O _ E M B E D D E D _ A S M 
 _ _ a t t r i b u t e _ _ ( ( s e c t i o n ( " . r r x _ t e x t " ) ) )   _ _ S T A T I C _ I N L I N E   _ _ A S M   u i n t 3 2 _ t   _ _ R R X ( u i n t 3 2 _ t   v a l u e ) 
 { 
     r r x   r 0 ,   r 0 
     b x   l r 
 } 
 # e n d i f 
 
 
 / * * 
     \ b r i e f       L D R T   U n p r i v i l e g e d   ( 8   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   U n p r i v i l e g e d   L D R T   i n s t r u c t i o n   f o r   8   b i t   v a l u e . 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   d a t a 
     \ r e t u r n                           v a l u e   o f   t y p e   u i n t 8 _ t   a t   ( * p t r ) 
   * / 
 # d e f i n e   _ _ L D R B T ( p t r )                                             ( ( u i n t 8 _ t   )     _ _ l d r t ( p t r ) ) 
 
 
 / * * 
     \ b r i e f       L D R T   U n p r i v i l e g e d   ( 1 6   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   U n p r i v i l e g e d   L D R T   i n s t r u c t i o n   f o r   1 6   b i t   v a l u e s . 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   d a t a 
     \ r e t u r n                 v a l u e   o f   t y p e   u i n t 1 6 _ t   a t   ( * p t r ) 
   * / 
 # d e f i n e   _ _ L D R H T ( p t r )                                             ( ( u i n t 1 6 _ t )     _ _ l d r t ( p t r ) ) 
 
 
 / * * 
     \ b r i e f       L D R T   U n p r i v i l e g e d   ( 3 2   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   U n p r i v i l e g e d   L D R T   i n s t r u c t i o n   f o r   3 2   b i t   v a l u e s . 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   d a t a 
     \ r e t u r n                 v a l u e   o f   t y p e   u i n t 3 2 _ t   a t   ( * p t r ) 
   * / 
 # d e f i n e   _ _ L D R T ( p t r )                                               ( ( u i n t 3 2 _ t   )   _ _ l d r t ( p t r ) ) 
 
 
 / * * 
     \ b r i e f       S T R T   U n p r i v i l e g e d   ( 8   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   U n p r i v i l e g e d   S T R T   i n s t r u c t i o n   f o r   8   b i t   v a l u e s . 
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   s t o r e 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   l o c a t i o n 
   * / 
 # d e f i n e   _ _ S T R B T ( v a l u e ,   p t r )                               _ _ s t r t ( v a l u e ,   p t r ) 
 
 
 / * * 
     \ b r i e f       S T R T   U n p r i v i l e g e d   ( 1 6   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   U n p r i v i l e g e d   S T R T   i n s t r u c t i o n   f o r   1 6   b i t   v a l u e s . 
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   s t o r e 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   l o c a t i o n 
   * / 
 # d e f i n e   _ _ S T R H T ( v a l u e ,   p t r )                               _ _ s t r t ( v a l u e ,   p t r ) 
 
 
 / * * 
     \ b r i e f       S T R T   U n p r i v i l e g e d   ( 3 2   b i t ) 
     \ d e t a i l s   E x e c u t e s   a   U n p r i v i l e g e d   S T R T   i n s t r u c t i o n   f o r   3 2   b i t   v a l u e s . 
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   s t o r e 
     \ p a r a m   [ i n ]         p t r     P o i n t e r   t o   l o c a t i o n 
   * / 
 # d e f i n e   _ _ S T R T ( v a l u e ,   p t r )                                 _ _ s t r t ( v a l u e ,   p t r ) 
 
 # e l s e     / *   ( ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 M _ _   )   & &   ( _ _ A R M _ A R C H _ 7 M _ _     = =   1 ) )   | |   \ 
                       ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 E M _ _ )   & &   ( _ _ A R M _ A R C H _ 7 E M _ _   = =   1 ) )           )   * / 
 
 / * * 
     \ b r i e f       S i g n e d   S a t u r a t e 
     \ d e t a i l s   S a t u r a t e s   a   s i g n e d   v a l u e . 
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   b e   s a t u r a t e d 
     \ p a r a m   [ i n ]         s a t     B i t   p o s i t i o n   t o   s a t u r a t e   t o   ( 1 . . 3 2 ) 
     \ r e t u r n                           S a t u r a t e d   v a l u e 
   * / 
 _ _ a t t r i b u t e _ _ ( ( a l w a y s _ i n l i n e ) )   _ _ S T A T I C _ I N L I N E   i n t 3 2 _ t   _ _ S S A T ( i n t 3 2 _ t   v a l ,   u i n t 3 2 _ t   s a t ) 
 { 
     i f   ( ( s a t   > =   1 U )   & &   ( s a t   < =   3 2 U ) ) 
     { 
         c o n s t   i n t 3 2 _ t   m a x   =   ( i n t 3 2 _ t ) ( ( 1 U   < <   ( s a t   -   1 U ) )   -   1 U ) ; 
         c o n s t   i n t 3 2 _ t   m i n   =   - 1   -   m a x   ; 
         i f   ( v a l   >   m a x ) 
         { 
             r e t u r n   m a x ; 
         } 
         e l s e   i f   ( v a l   <   m i n ) 
         { 
             r e t u r n   m i n ; 
         } 
     } 
     r e t u r n   v a l ; 
 } 
 
 / * * 
     \ b r i e f       U n s i g n e d   S a t u r a t e 
     \ d e t a i l s   S a t u r a t e s   a n   u n s i g n e d   v a l u e . 
     \ p a r a m   [ i n ]     v a l u e     V a l u e   t o   b e   s a t u r a t e d 
     \ p a r a m   [ i n ]         s a t     B i t   p o s i t i o n   t o   s a t u r a t e   t o   ( 0 . . 3 1 ) 
     \ r e t u r n                           S a t u r a t e d   v a l u e 
   * / 
 _ _ a t t r i b u t e _ _ ( ( a l w a y s _ i n l i n e ) )   _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ U S A T ( i n t 3 2 _ t   v a l ,   u i n t 3 2 _ t   s a t ) 
 { 
     i f   ( s a t   < =   3 1 U ) 
     { 
         c o n s t   u i n t 3 2 _ t   m a x   =   ( ( 1 U   < <   s a t )   -   1 U ) ; 
         i f   ( v a l   >   ( i n t 3 2 _ t ) m a x ) 
         { 
             r e t u r n   m a x ; 
         } 
         e l s e   i f   ( v a l   <   0 ) 
         { 
             r e t u r n   0 U ; 
         } 
     } 
     r e t u r n   ( u i n t 3 2 _ t ) v a l ; 
 } 
 
 # e n d i f   / *   ( ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 M _ _   )   & &   ( _ _ A R M _ A R C H _ 7 M _ _     = =   1 ) )   | |   \ 
                       ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 E M _ _ )   & &   ( _ _ A R M _ A R C H _ 7 E M _ _   = =   1 ) )           )   * / 
 
 / * @ } * /   / *   e n d   o f   g r o u p   C M S I S _ C o r e _ I n s t r u c t i o n I n t e r f a c e   * / 
 
 
 / *   # # # # # # # # # # # # # # # # # # #     C o m p i l e r   s p e c i f i c   I n t r i n s i c s     # # # # # # # # # # # # # # # # # # # # # # # # # # #   * / 
 / * *   \ d e f g r o u p   C M S I S _ S I M D _ i n t r i n s i c s   C M S I S   S I M D   I n t r i n s i c s 
     A c c e s s   t o   d e d i c a t e d   S I M D   i n s t r u c t i o n s 
     @ { 
 * / 
 
 # i f   ( ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 E M _ _ )   & &   ( _ _ A R M _ A R C H _ 7 E M _ _   = =   1 ) )           ) 
 
 # d e f i n e   _ _ S A D D 8                                                       _ _ s a d d 8 
 # d e f i n e   _ _ Q A D D 8                                                       _ _ q a d d 8 
 # d e f i n e   _ _ S H A D D 8                                                     _ _ s h a d d 8 
 # d e f i n e   _ _ U A D D 8                                                       _ _ u a d d 8 
 # d e f i n e   _ _ U Q A D D 8                                                     _ _ u q a d d 8 
 # d e f i n e   _ _ U H A D D 8                                                     _ _ u h a d d 8 
 # d e f i n e   _ _ S S U B 8                                                       _ _ s s u b 8 
 # d e f i n e   _ _ Q S U B 8                                                       _ _ q s u b 8 
 # d e f i n e   _ _ S H S U B 8                                                     _ _ s h s u b 8 
 # d e f i n e   _ _ U S U B 8                                                       _ _ u s u b 8 
 # d e f i n e   _ _ U Q S U B 8                                                     _ _ u q s u b 8 
 # d e f i n e   _ _ U H S U B 8                                                     _ _ u h s u b 8 
 # d e f i n e   _ _ S A D D 1 6                                                     _ _ s a d d 1 6 
 # d e f i n e   _ _ Q A D D 1 6                                                     _ _ q a d d 1 6 
 # d e f i n e   _ _ S H A D D 1 6                                                   _ _ s h a d d 1 6 
 # d e f i n e   _ _ U A D D 1 6                                                     _ _ u a d d 1 6 
 # d e f i n e   _ _ U Q A D D 1 6                                                   _ _ u q a d d 1 6 
 # d e f i n e   _ _ U H A D D 1 6                                                   _ _ u h a d d 1 6 
 # d e f i n e   _ _ S S U B 1 6                                                     _ _ s s u b 1 6 
 # d e f i n e   _ _ Q S U B 1 6                                                     _ _ q s u b 1 6 
 # d e f i n e   _ _ S H S U B 1 6                                                   _ _ s h s u b 1 6 
 # d e f i n e   _ _ U S U B 1 6                                                     _ _ u s u b 1 6 
 # d e f i n e   _ _ U Q S U B 1 6                                                   _ _ u q s u b 1 6 
 # d e f i n e   _ _ U H S U B 1 6                                                   _ _ u h s u b 1 6 
 # d e f i n e   _ _ S A S X                                                         _ _ s a s x 
 # d e f i n e   _ _ Q A S X                                                         _ _ q a s x 
 # d e f i n e   _ _ S H A S X                                                       _ _ s h a s x 
 # d e f i n e   _ _ U A S X                                                         _ _ u a s x 
 # d e f i n e   _ _ U Q A S X                                                       _ _ u q a s x 
 # d e f i n e   _ _ U H A S X                                                       _ _ u h a s x 
 # d e f i n e   _ _ S S A X                                                         _ _ s s a x 
 # d e f i n e   _ _ Q S A X                                                         _ _ q s a x 
 # d e f i n e   _ _ S H S A X                                                       _ _ s h s a x 
 # d e f i n e   _ _ U S A X                                                         _ _ u s a x 
 # d e f i n e   _ _ U Q S A X                                                       _ _ u q s a x 
 # d e f i n e   _ _ U H S A X                                                       _ _ u h s a x 
 # d e f i n e   _ _ U S A D 8                                                       _ _ u s a d 8 
 # d e f i n e   _ _ U S A D A 8                                                     _ _ u s a d a 8 
 # d e f i n e   _ _ S S A T 1 6                                                     _ _ s s a t 1 6 
 # d e f i n e   _ _ U S A T 1 6                                                     _ _ u s a t 1 6 
 # d e f i n e   _ _ U X T B 1 6                                                     _ _ u x t b 1 6 
 # d e f i n e   _ _ U X T A B 1 6                                                   _ _ u x t a b 1 6 
 # d e f i n e   _ _ S X T B 1 6                                                     _ _ s x t b 1 6 
 # d e f i n e   _ _ S X T A B 1 6                                                   _ _ s x t a b 1 6 
 # d e f i n e   _ _ S M U A D                                                       _ _ s m u a d 
 # d e f i n e   _ _ S M U A D X                                                     _ _ s m u a d x 
 # d e f i n e   _ _ S M L A D                                                       _ _ s m l a d 
 # d e f i n e   _ _ S M L A D X                                                     _ _ s m l a d x 
 # d e f i n e   _ _ S M L A L D                                                     _ _ s m l a l d 
 # d e f i n e   _ _ S M L A L D X                                                   _ _ s m l a l d x 
 # d e f i n e   _ _ S M U S D                                                       _ _ s m u s d 
 # d e f i n e   _ _ S M U S D X                                                     _ _ s m u s d x 
 # d e f i n e   _ _ S M L S D                                                       _ _ s m l s d 
 # d e f i n e   _ _ S M L S D X                                                     _ _ s m l s d x 
 # d e f i n e   _ _ S M L S L D                                                     _ _ s m l s l d 
 # d e f i n e   _ _ S M L S L D X                                                   _ _ s m l s l d x 
 # d e f i n e   _ _ S E L                                                           _ _ s e l 
 # d e f i n e   _ _ Q A D D                                                         _ _ q a d d 
 # d e f i n e   _ _ Q S U B                                                         _ _ q s u b 
 
 # d e f i n e   _ _ P K H B T ( A R G 1 , A R G 2 , A R G 3 )                     (   ( ( ( ( u i n t 3 2 _ t ) ( A R G 1 ) )                     )   &   0 x 0 0 0 0 F F F F U L )   |     \ 
                                                                                       ( ( ( ( u i n t 3 2 _ t ) ( A R G 2 ) )   < <   ( A R G 3 ) )   &   0 x F F F F 0 0 0 0 U L )     ) 
 
 # d e f i n e   _ _ P K H T B ( A R G 1 , A R G 2 , A R G 3 )                     (   ( ( ( ( u i n t 3 2 _ t ) ( A R G 1 ) )                     )   &   0 x F F F F 0 0 0 0 U L )   |     \ 
                                                                                       ( ( ( ( u i n t 3 2 _ t ) ( A R G 2 ) )   > >   ( A R G 3 ) )   &   0 x 0 0 0 0 F F F F U L )     ) 
 
 # d e f i n e   _ _ S M M L A ( A R G 1 , A R G 2 , A R G 3 )                     (   ( i n t 3 2 _ t ) ( ( ( ( i n t 6 4 _ t ) ( A R G 1 )   *   ( A R G 2 ) )   +   \ 
                                                                                                             ( ( i n t 6 4 _ t ) ( A R G 3 )   < <   3 2 U )           )   > >   3 2 U ) ) 
 
 # e n d i f   / *   ( ( d e f i n e d   ( _ _ A R M _ A R C H _ 7 E M _ _ )   & &   ( _ _ A R M _ A R C H _ 7 E M _ _   = =   1 ) )           )   * / 
 / * @ }   e n d   o f   g r o u p   C M S I S _ S I M D _ i n t r i n s i c s   * / 
 
 
 # e n d i f   / *   _ _ C M S I S _ A R M C C _ H   * / 