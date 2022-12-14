??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ d m a . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       D M A   H A L   m o d u l e   d r i v e r .  
     *                   T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                   f u n c t i o n a l i t i e s   o f   t h e   D i r e c t   M e m o r y   A c c e s s   ( D M A )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   a n d   e r r o r s   f u n c t i o n s  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
       ( # )   E n a b l e   a n d   c o n f i g u r e   t h e   p e r i p h e r a l   t o   b e   c o n n e c t e d   t o   t h e   D M A   C h a n n e l  
               ( e x c e p t   f o r   i n t e r n a l   S R A M   /   F L A S H   m e m o r i e s :   n o   i n i t i a l i z a t i o n   i s    
               n e c e s s a r y ) .   P l e a s e   r e f e r   t o   t h e   R e f e r e n c e   m a n u a l   f o r   c o n n e c t i o n   b e t w e e n   p e r i p h e r a l s  
               a n d   D M A   r e q u e s t s .  
  
       ( # )   F o r   a   g i v e n   C h a n n e l ,   p r o g r a m   t h e   r e q u i r e d   c o n f i g u r a t i o n   t h r o u g h   t h e   f o l l o w i n g   p a r a m e t e r s :  
               C h a n n e l   r e q u e s t ,   T r a n s f e r   D i r e c t i o n ,   S o u r c e   a n d   D e s t i n a t i o n   d a t a   f o r m a t s ,  
               C i r c u l a r   o r   N o r m a l   m o d e ,   C h a n n e l   P r i o r i t y   l e v e l ,   S o u r c e   a n d   D e s t i n a t i o n   I n c r e m e n t   m o d e  
               u s i n g   H A L _ D M A _ I n i t ( )   f u n c t i o n .  
  
       ( # )   U s e   H A L _ D M A _ G e t S t a t e ( )   f u n c t i o n   t o   r e t u r n   t h e   D M A   s t a t e   a n d   H A L _ D M A _ G e t E r r o r ( )   i n   c a s e   o f   e r r o r    
               d e t e c t i o n .  
                                          
       ( # )   U s e   H A L _ D M A _ A b o r t ( )   f u n c t i o n   t o   a b o r t   t h e   c u r r e n t   t r a n s f e r  
                                        
           - @ -       I n   M e m o r y - t o - M e m o r y   t r a n s f e r   m o d e ,   C i r c u l a r   m o d e   i s   n o t   a l l o w e d .  
           * * *   P o l l i n g   m o d e   I O   o p e r a t i o n   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
                     ( + )   U s e   H A L _ D M A _ S t a r t ( )   t o   s t a r t   D M A   t r a n s f e r   a f t e r   t h e   c o n f i g u r a t i o n   o f   S o u r c e  
                             a d d r e s s   a n d   d e s t i n a t i o n   a d d r e s s   a n d   t h e   L e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d  
                     ( + )   U s e   H A L _ D M A _ P o l l F o r T r a n s f e r ( )   t o   p o l l   f o r   t h e   e n d   o f   c u r r e n t   t r a n s f e r ,   i n   t h i s  
                             c a s e   a   f i x e d   T i m e o u t   c a n   b e   c o n f i g u r e d   b y   U s e r   d e p e n d i n g   f r o m   h i s   a p p l i c a t i o n .  
  
           * * *   I n t e r r u p t   m o d e   I O   o p e r a t i o n   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
                     ( + )   C o n f i g u r e   t h e   D M A   i n t e r r u p t   p r i o r i t y   u s i n g   H A L _ N V I C _ S e t P r i o r i t y ( )  
                     ( + )   E n a b l e   t h e   D M A   I R Q   h a n d l e r   u s i n g   H A L _ N V I C _ E n a b l e I R Q ( )  
                     ( + )   U s e   H A L _ D M A _ S t a r t _ I T ( )   t o   s t a r t   D M A   t r a n s f e r   a f t e r   t h e   c o n f i g u r a t i o n   o f  
                             S o u r c e   a d d r e s s   a n d   d e s t i n a t i o n   a d d r e s s   a n d   t h e   L e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d .  
                             I n   t h i s   c a s e   t h e   D M A   i n t e r r u p t   i s   c o n f i g u r e d  
                     ( + )   U s e   H A L _ D M A _ I R Q H a n d l e r ( )   c a l l e d   u n d e r   D M A _ I R Q H a n d l e r ( )   I n t e r r u p t   s u b r o u t i n e  
                     ( + )   A t   t h e   e n d   o f   d a t a   t r a n s f e r   H A L _ D M A _ I R Q H a n d l e r ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                             a d d   h i s   o w n   f u n c t i o n   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   X f e r C p l t C a l l b a c k   a n d  
                             X f e r E r r o r C a l l b a c k   ( i . e .   a   m e m b e r   o f   D M A   h a n d l e   s t r u c t u r e ) .  
  
           * * *   D M A   H A L   d r i v e r   m a c r o s   l i s t   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =    
             [ . . ]  
               B e l o w   t h e   l i s t   o f   m o s t   u s e d   m a c r o s   i n   D M A   H A L   d r i v e r .  
  
               ( + )   _ _ H A L _ D M A _ E N A B L E :   E n a b l e   t h e   s p e c i f i e d   D M A   C h a n n e l .  
               ( + )   _ _ H A L _ D M A _ D I S A B L E :   D i s a b l e   t h e   s p e c i f i e d   D M A   C h a n n e l .  
               ( + )   _ _ H A L _ D M A _ G E T _ F L A G :   G e t   t h e   D M A   C h a n n e l   p e n d i n g   f l a g s .  
               ( + )   _ _ H A L _ D M A _ C L E A R _ F L A G :   C l e a r   t h e   D M A   C h a n n e l   p e n d i n g   f l a g s .  
               ( + )   _ _ H A L _ D M A _ E N A B L E _ I T :   E n a b l e   t h e   s p e c i f i e d   D M A   C h a n n e l   i n t e r r u p t s .  
               ( + )   _ _ H A L _ D M A _ D I S A B L E _ I T :   D i s a b l e   t h e   s p e c i f i e d   D M A   C h a n n e l   i n t e r r u p t s .  
               ( + )   _ _ H A L _ D M A _ G E T _ I T _ S O U R C E :   C h e c k   w h e t h e r   t h e   s p e c i f i e d   D M A   C h a n n e l   i n t e r r u p t   h a s   o c c u r r e d   o r   n o t .    
  
           [ . . ]    
             ( @ )   Y o u   c a n   r e f e r   t o   t h e   D M A   H A L   d r i v e r   h e a d e r   f i l e   f o r   m o r e   u s e f u l   m a c r o s      
  
     @ e n d v e r b a t i m  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   D M A   D M A  
     *   @ b r i e f   D M A   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ D M A _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   D M A _ P r i v a t e _ F u n c t i o n s   D M A   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 s t a t i c   v o i d   D M A _ S e t C o n f i g ( D M A _ H a n d l e T y p e D e f   * h d m a ,   u i n t 3 2 _ t   S r c A d d r e s s ,   u i n t 3 2 _ t   D s t A d d r e s s ,   u i n t 3 2 _ t   D a t a L e n g t h ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   D M A _ E x p o r t e d _ F u n c t i o n s   D M A   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f       I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s    
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                           # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s     # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e   t h e   D M A   C h a n n e l   s o u r c e  
         a n d   d e s t i n a t i o n   a d d r e s s e s ,   i n c r e m e n t a t i o n   a n d   d a t a   s i z e s ,   t r a n s f e r   d i r e c t i o n ,    
         c i r c u l a r / n o r m a l   m o d e   s e l e c t i o n ,   m e m o r y - t o - m e m o r y   m o d e   s e l e c t i o n   a n d   C h a n n e l   p r i o r i t y   v a l u e .  
         [ . . ]  
         T h e   H A L _ D M A _ I n i t ( )   f u n c t i o n   f o l l o w s   t h e   D M A   c o n f i g u r a t i o n   p r o c e d u r e s   a s   d e s c r i b e d   i n  
         r e f e r e n c e   m a n u a l .      
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   D M A   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   D M A _ I n i t T y p e D e f   a n d   i n i t i a l i z e   t h e   a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     h d m a :   P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ I n i t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     u i n t 3 2 _ t   t m p   =   0 U ;  
  
     / *   C h e c k   t h e   D M A   h a n d l e   a l l o c a t i o n   * /  
     i f ( h d m a   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D M A _ A L L _ I N S T A N C E ( h d m a - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ D M A _ D I R E C T I O N ( h d m a - > I n i t . D i r e c t i o n ) ) ;  
     a s s e r t _ p a r a m ( I S _ D M A _ P E R I P H E R A L _ I N C _ S T A T E ( h d m a - > I n i t . P e r i p h I n c ) ) ;  
     a s s e r t _ p a r a m ( I S _ D M A _ M E M O R Y _ I N C _ S T A T E ( h d m a - > I n i t . M e m I n c ) ) ;  
     a s s e r t _ p a r a m ( I S _ D M A _ P E R I P H E R A L _ D A T A _ S I Z E ( h d m a - > I n i t . P e r i p h D a t a A l i g n m e n t ) ) ;  
     a s s e r t _ p a r a m ( I S _ D M A _ M E M O R Y _ D A T A _ S I Z E ( h d m a - > I n i t . M e m D a t a A l i g n m e n t ) ) ;  
     a s s e r t _ p a r a m ( I S _ D M A _ M O D E ( h d m a - > I n i t . M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ D M A _ P R I O R I T Y ( h d m a - > I n i t . P r i o r i t y ) ) ;  
  
 # i f   d e f i n e d   ( D M A 2 )  
     / *   c a l c u l a t i o n   o f   t h e   c h a n n e l   i n d e x   * /  
     i f   ( ( u i n t 3 2 _ t ) ( h d m a - > I n s t a n c e )   <   ( u i n t 3 2 _ t ) ( D M A 2 _ C h a n n e l 1 ) )  
     {  
         / *   D M A 1   * /  
         h d m a - > C h a n n e l I n d e x   =   ( ( ( u i n t 3 2 _ t ) h d m a - > I n s t a n c e   -   ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 1 )   /   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 2   -   ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 1 ) )   < <   2 ;  
         h d m a - > D m a B a s e A d d r e s s   =   D M A 1 ;  
     }  
     e l s e    
     {  
         / *   D M A 2   * /  
         h d m a - > C h a n n e l I n d e x   =   ( ( ( u i n t 3 2 _ t ) h d m a - > I n s t a n c e   -   ( u i n t 3 2 _ t ) D M A 2 _ C h a n n e l 1 )   /   ( ( u i n t 3 2 _ t ) D M A 2 _ C h a n n e l 2   -   ( u i n t 3 2 _ t ) D M A 2 _ C h a n n e l 1 ) )   < <   2 ;  
         h d m a - > D m a B a s e A d d r e s s   =   D M A 2 ;  
     }  
 # e l s e  
     / *   D M A 1   * /  
     h d m a - > C h a n n e l I n d e x   =   ( ( ( u i n t 3 2 _ t ) h d m a - > I n s t a n c e   -   ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 1 )   /   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 2   -   ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 1 ) )   < <   2 ;  
     h d m a - > D m a B a s e A d d r e s s   =   D M A 1 ;  
 # e n d i f   / *   D M A 2   * /  
  
     / *   C h a n g e   D M A   p e r i p h e r a l   s t a t e   * /  
     h d m a - > S t a t e   =   H A L _ D M A _ S T A T E _ B U S Y ;  
  
     / *   G e t   t h e   C R   r e g i s t e r   v a l u e   * /  
     t m p   =   h d m a - > I n s t a n c e - > C C R ;  
  
     / *   C l e a r   P L ,   M S I Z E ,   P S I Z E ,   M I N C ,   P I N C ,   C I R C   a n d   D I R   b i t s   * /  
     t m p   & =   ( ( u i n t 3 2 _ t ) ~ ( D M A _ C C R _ P L         |   D M A _ C C R _ M S I Z E     |   D M A _ C C R _ P S I Z E     |   \  
                                             D M A _ C C R _ M I N C     |   D M A _ C C R _ P I N C       |   D M A _ C C R _ C I R C       |   \  
                                             D M A _ C C R _ D I R ) ) ;  
  
     / *   P r e p a r e   t h e   D M A   C h a n n e l   c o n f i g u r a t i o n   * /  
     t m p   | =     h d m a - > I n i t . D i r e c t i o n                 |  
                     h d m a - > I n i t . P e r i p h I n c                       |   h d m a - > I n i t . M e m I n c                       |  
                     h d m a - > I n i t . P e r i p h D a t a A l i g n m e n t   |   h d m a - > I n i t . M e m D a t a A l i g n m e n t   |  
                     h d m a - > I n i t . M o d e                                 |   h d m a - > I n i t . P r i o r i t y ;  
  
     / *   W r i t e   t o   D M A   C h a n n e l   C R   r e g i s t e r   * /  
     h d m a - > I n s t a n c e - > C C R   =   t m p ;  
  
     / *   I n i t i a l i s e   t h e   e r r o r   c o d e   * /  
     h d m a - > E r r o r C o d e   =   H A L _ D M A _ E R R O R _ N O N E ;  
  
     / *   I n i t i a l i z e   t h e   D M A   s t a t e * /  
     h d m a - > S t a t e   =   H A L _ D M A _ S T A T E _ R E A D Y ;  
     / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
     h d m a - > L o c k   =   H A L _ U N L O C K E D ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e   t h e   D M A   p e r i p h e r a l .  
     *   @ p a r a m     h d m a :   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ D e I n i t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     / *   C h e c k   t h e   D M A   h a n d l e   a l l o c a t i o n   * /  
     i f ( h d m a   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D M A _ A L L _ I N S T A N C E ( h d m a - > I n s t a n c e ) ) ;  
  
     / *   D i s a b l e   t h e   s e l e c t e d   D M A   C h a n n e l x   * /  
     _ _ H A L _ D M A _ D I S A B L E ( h d m a ) ;  
  
     / *   R e s e t   D M A   C h a n n e l   c o n t r o l   r e g i s t e r   * /  
     h d m a - > I n s t a n c e - > C C R     =   0 U ;  
  
     / *   R e s e t   D M A   C h a n n e l   N u m b e r   o f   D a t a   t o   T r a n s f e r   r e g i s t e r   * /  
     h d m a - > I n s t a n c e - > C N D T R   =   0 U ;  
  
     / *   R e s e t   D M A   C h a n n e l   p e r i p h e r a l   a d d r e s s   r e g i s t e r   * /  
     h d m a - > I n s t a n c e - > C P A R     =   0 U ;  
  
     / *   R e s e t   D M A   C h a n n e l   m e m o r y   a d d r e s s   r e g i s t e r   * /  
     h d m a - > I n s t a n c e - > C M A R   =   0 U ;  
  
 # i f   d e f i n e d   ( D M A 2 )  
     / *   c a l c u l a t i o n   o f   t h e   c h a n n e l   i n d e x   * /  
     i f   ( ( u i n t 3 2 _ t ) ( h d m a - > I n s t a n c e )   <   ( u i n t 3 2 _ t ) ( D M A 2 _ C h a n n e l 1 ) )  
     {  
         / *   D M A 1   * /  
         h d m a - > C h a n n e l I n d e x   =   ( ( ( u i n t 3 2 _ t ) h d m a - > I n s t a n c e   -   ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 1 )   /   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 2   -   ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 1 ) )   < <   2 ;  
         h d m a - > D m a B a s e A d d r e s s   =   D M A 1 ;  
     }  
     e l s e  
     {  
         / *   D M A 2   * /  
         h d m a - > C h a n n e l I n d e x   =   ( ( ( u i n t 3 2 _ t ) h d m a - > I n s t a n c e   -   ( u i n t 3 2 _ t ) D M A 2 _ C h a n n e l 1 )   /   ( ( u i n t 3 2 _ t ) D M A 2 _ C h a n n e l 2   -   ( u i n t 3 2 _ t ) D M A 2 _ C h a n n e l 1 ) )   < <   2 ;  
         h d m a - > D m a B a s e A d d r e s s   =   D M A 2 ;  
     }  
 # e l s e  
     / *   D M A 1   * /  
     h d m a - > C h a n n e l I n d e x   =   ( ( ( u i n t 3 2 _ t ) h d m a - > I n s t a n c e   -   ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 1 )   /   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 2   -   ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 1 ) )   < <   2 ;  
     h d m a - > D m a B a s e A d d r e s s   =   D M A 1 ;  
 # e n d i f   / *   D M A 2   * /  
  
     / *   C l e a r   a l l   f l a g s   * /  
     h d m a - > D m a B a s e A d d r e s s - > I F C R   =   ( D M A _ I S R _ G I F 1   < <   ( h d m a - > C h a n n e l I n d e x ) ) ;  
  
     / *   C l e a n   a l l   c a l l b a c k s   * /  
     h d m a - > X f e r C p l t C a l l b a c k   =   N U L L ;  
     h d m a - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
     h d m a - > X f e r E r r o r C a l l b a c k   =   N U L L ;  
     h d m a - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
     / *   R e s e t   t h e   e r r o r   c o d e   * /  
     h d m a - > E r r o r C o d e   =   H A L _ D M A _ E R R O R _ N O N E ;  
  
     / *   R e s e t   t h e   D M A   s t a t e   * /  
     h d m a - > S t a t e   =   H A L _ D M A _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h d m a ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   a n d   O u t p u t   o p e r a t i o n   f u n c t i o n s  
     *     @ b r i e f       I n p u t   a n d   O u t p u t   o p e r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #     I O   o p e r a t i o n   f u n c t i o n s     # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   C o n f i g u r e   t h e   s o u r c e ,   d e s t i n a t i o n   a d d r e s s   a n d   d a t a   l e n g t h   a n d   S t a r t   D M A   t r a n s f e r  
             ( + )   C o n f i g u r e   t h e   s o u r c e ,   d e s t i n a t i o n   a d d r e s s   a n d   d a t a   l e n g t h   a n d  
                     S t a r t   D M A   t r a n s f e r   w i t h   i n t e r r u p t  
             ( + )   A b o r t   D M A   t r a n s f e r  
             ( + )   P o l l   f o r   t r a n s f e r   c o m p l e t e  
             ( + )   H a n d l e   D M A   i n t e r r u p t   r e q u e s t  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S t a r t   t h e   D M A   T r a n s f e r .  
     *   @ p a r a m     h d m a :   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ p a r a m     S r c A d d r e s s :   T h e   s o u r c e   m e m o r y   B u f f e r   a d d r e s s  
     *   @ p a r a m     D s t A d d r e s s :   T h e   d e s t i n a t i o n   m e m o r y   B u f f e r   a d d r e s s  
     *   @ p a r a m     D a t a L e n g t h :   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   s o u r c e   t o   d e s t i n a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ S t a r t ( D M A _ H a n d l e T y p e D e f   * h d m a ,   u i n t 3 2 _ t   S r c A d d r e s s ,   u i n t 3 2 _ t   D s t A d d r e s s ,   u i n t 3 2 _ t   D a t a L e n g t h )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D M A _ B U F F E R _ S I Z E ( D a t a L e n g t h ) ) ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d m a ) ;  
  
     i f ( H A L _ D M A _ S T A T E _ R E A D Y   = =   h d m a - > S t a t e )  
     {  
         / *   C h a n g e   D M A   p e r i p h e r a l   s t a t e   * /  
         h d m a - > S t a t e   =   H A L _ D M A _ S T A T E _ B U S Y ;  
         h d m a - > E r r o r C o d e   =   H A L _ D M A _ E R R O R _ N O N E ;  
                          
         / *   D i s a b l e   t h e   p e r i p h e r a l   * /  
         _ _ H A L _ D M A _ D I S A B L E ( h d m a ) ;  
          
         / *   C o n f i g u r e   t h e   s o u r c e ,   d e s t i n a t i o n   a d d r e s s   a n d   t h e   d a t a   l e n g t h   &   c l e a r   f l a g s * /  
         D M A _ S e t C o n f i g ( h d m a ,   S r c A d d r e s s ,   D s t A d d r e s s ,   D a t a L e n g t h ) ;  
          
         / *   E n a b l e   t h e   P e r i p h e r a l   * /  
         _ _ H A L _ D M A _ E N A B L E ( h d m a ) ;  
     }  
     e l s e  
     {  
       / *   P r o c e s s   U n l o c k e d   * /  
       _ _ H A L _ U N L O C K ( h d m a ) ;      
       s t a t u s   =   H A L _ B U S Y ;  
     }      
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S t a r t   t h e   D M A   T r a n s f e r   w i t h   i n t e r r u p t   e n a b l e d .  
     *   @ p a r a m     h d m a :   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ p a r a m     S r c A d d r e s s :   T h e   s o u r c e   m e m o r y   B u f f e r   a d d r e s s  
     *   @ p a r a m     D s t A d d r e s s :   T h e   d e s t i n a t i o n   m e m o r y   B u f f e r   a d d r e s s  
     *   @ p a r a m     D a t a L e n g t h :   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   s o u r c e   t o   d e s t i n a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ S t a r t _ I T ( D M A _ H a n d l e T y p e D e f   * h d m a ,   u i n t 3 2 _ t   S r c A d d r e s s ,   u i n t 3 2 _ t   D s t A d d r e s s ,   u i n t 3 2 _ t   D a t a L e n g t h )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D M A _ B U F F E R _ S I Z E ( D a t a L e n g t h ) ) ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d m a ) ;  
      
     i f ( H A L _ D M A _ S T A T E _ R E A D Y   = =   h d m a - > S t a t e )  
     {  
         / *   C h a n g e   D M A   p e r i p h e r a l   s t a t e   * /  
         h d m a - > S t a t e   =   H A L _ D M A _ S T A T E _ B U S Y ;  
         h d m a - > E r r o r C o d e   =   H A L _ D M A _ E R R O R _ N O N E ;  
          
         / *   D i s a b l e   t h e   p e r i p h e r a l   * /  
         _ _ H A L _ D M A _ D I S A B L E ( h d m a ) ;  
          
         / *   C o n f i g u r e   t h e   s o u r c e ,   d e s t i n a t i o n   a d d r e s s   a n d   t h e   d a t a   l e n g t h   &   c l e a r   f l a g s * /  
         D M A _ S e t C o n f i g ( h d m a ,   S r c A d d r e s s ,   D s t A d d r e s s ,   D a t a L e n g t h ) ;  
          
         / *   E n a b l e   t h e   t r a n s f e r   c o m p l e t e   i n t e r r u p t   * /  
         / *   E n a b l e   t h e   t r a n s f e r   E r r o r   i n t e r r u p t   * /  
         i f ( N U L L   ! =   h d m a - > X f e r H a l f C p l t C a l l b a c k )  
         {  
             / *   E n a b l e   t h e   H a l f   t r a n s f e r   c o m p l e t e   i n t e r r u p t   a s   w e l l   * /  
             _ _ H A L _ D M A _ E N A B L E _ I T ( h d m a ,   ( D M A _ I T _ T C   |   D M A _ I T _ H T   |   D M A _ I T _ T E ) ) ;  
         }  
         e l s e  
         {  
             _ _ H A L _ D M A _ D I S A B L E _ I T ( h d m a ,   D M A _ I T _ H T ) ;  
             _ _ H A L _ D M A _ E N A B L E _ I T ( h d m a ,   ( D M A _ I T _ T C   |   D M A _ I T _ T E ) ) ;  
         }  
         / *   E n a b l e   t h e   P e r i p h e r a l   * /  
         _ _ H A L _ D M A _ E N A B L E ( h d m a ) ;  
     }  
     e l s e  
     {              
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h d m a ) ;    
  
         / *   R e m a i n   B U S Y   * /  
         s t a t u s   =   H A L _ B U S Y ;  
     }          
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   t h e   D M A   T r a n s f e r .  
     *   @ p a r a m     h d m a :   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ A b o r t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
      
     i f ( h d m a - > S t a t e   ! =   H A L _ D M A _ S T A T E _ B U S Y )  
     {  
         / *   n o   t r a n s f e r   o n g o i n g   * /  
         h d m a - > E r r o r C o d e   =   H A L _ D M A _ E R R O R _ N O _ X F E R ;  
          
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h d m a ) ;  
          
         r e t u r n   H A L _ E R R O R ;  
     }  
     e l s e  
  
     {  
         / *   D i s a b l e   D M A   I T   * /  
         _ _ H A L _ D M A _ D I S A B L E _ I T ( h d m a ,   ( D M A _ I T _ T C   |   D M A _ I T _ H T   |   D M A _ I T _ T E ) ) ;  
              
         / *   D i s a b l e   t h e   c h a n n e l   * /  
         _ _ H A L _ D M A _ D I S A B L E ( h d m a ) ;  
              
         / *   C l e a r   a l l   f l a g s   * /  
         h d m a - > D m a B a s e A d d r e s s - > I F C R   =   ( D M A _ I S R _ G I F 1   < <   h d m a - > C h a n n e l I n d e x ) ;  
     }  
     / *   C h a n g e   t h e   D M A   s t a t e   * /  
     h d m a - > S t a t e   =   H A L _ D M A _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h d m a ) ;              
      
     r e t u r n   s t a t u s ;    
 }  
  
 / * *  
     *   @ b r i e f     A b o r t s   t h e   D M A   T r a n s f e r   i n   I n t e r r u p t   m o d e .  
     *   @ p a r a m     h d m a     :   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ A b o r t _ I T ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {      
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
      
     i f ( H A L _ D M A _ S T A T E _ B U S Y   ! =   h d m a - > S t a t e )  
     {  
         / *   n o   t r a n s f e r   o n g o i n g   * /  
         h d m a - > E r r o r C o d e   =   H A L _ D M A _ E R R O R _ N O _ X F E R ;  
                  
         s t a t u s   =   H A L _ E R R O R ;  
     }  
     e l s e  
     {    
         / *   D i s a b l e   D M A   I T   * /  
         _ _ H A L _ D M A _ D I S A B L E _ I T ( h d m a ,   ( D M A _ I T _ T C   |   D M A _ I T _ H T   |   D M A _ I T _ T E ) ) ;  
  
         / *   D i s a b l e   t h e   c h a n n e l   * /  
         _ _ H A L _ D M A _ D I S A B L E ( h d m a ) ;  
  
         / *   C l e a r   a l l   f l a g s   * /  
         _ _ H A L _ D M A _ C L E A R _ F L A G ( h d m a ,   _ _ H A L _ D M A _ G E T _ G I _ F L A G _ I N D E X ( h d m a ) ) ;  
  
         / *   C h a n g e   t h e   D M A   s t a t e   * /  
         h d m a - > S t a t e   =   H A L _ D M A _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h d m a ) ;  
  
         / *   C a l l   U s e r   A b o r t   c a l l b a c k   * /  
         i f ( h d m a - > X f e r A b o r t C a l l b a c k   ! =   N U L L )  
         {  
             h d m a - > X f e r A b o r t C a l l b a c k ( h d m a ) ;  
         }    
     }  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     P o l l i n g   f o r   t r a n s f e r   c o m p l e t e .  
     *   @ p a r a m     h d m a :         p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                     t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ p a r a m     C o m p l e t e L e v e l :   S p e c i f i e s   t h e   D M A   l e v e l   c o m p l e t e .  
     *   @ p a r a m     T i m e o u t :               T i m e o u t   d u r a t i o n .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ P o l l F o r T r a n s f e r ( D M A _ H a n d l e T y p e D e f   * h d m a ,   u i n t 3 2 _ t   C o m p l e t e L e v e l ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 3 2 _ t   t e m p ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
  
     i f ( H A L _ D M A _ S T A T E _ B U S Y   ! =   h d m a - > S t a t e )  
     {  
         / *   n o   t r a n s f e r   o n g o i n g   * /  
         h d m a - > E r r o r C o d e   =   H A L _ D M A _ E R R O R _ N O _ X F E R ;  
         _ _ H A L _ U N L O C K ( h d m a ) ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P o l l i n g   m o d e   n o t   s u p p o r t e d   i n   c i r c u l a r   m o d e   * /  
     i f   ( R E S E T   ! =   ( h d m a - > I n s t a n c e - > C C R   &   D M A _ C C R _ C I R C ) )  
     {  
         h d m a - > E r r o r C o d e   =   H A L _ D M A _ E R R O R _ N O T _ S U P P O R T E D ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
      
     / *   G e t   t h e   l e v e l   t r a n s f e r   c o m p l e t e   f l a g   * /  
     i f ( C o m p l e t e L e v e l   = =   H A L _ D M A _ F U L L _ T R A N S F E R )  
     {  
         / *   T r a n s f e r   C o m p l e t e   f l a g   * /  
         t e m p   =   _ _ H A L _ D M A _ G E T _ T C _ F L A G _ I N D E X ( h d m a ) ;  
     }  
     e l s e  
     {  
         / *   H a l f   T r a n s f e r   C o m p l e t e   f l a g   * /  
         t e m p   =   _ _ H A L _ D M A _ G E T _ H T _ F L A G _ I N D E X ( h d m a ) ;  
     }  
  
     / *   G e t   t i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     w h i l e ( _ _ H A L _ D M A _ G E T _ F L A G ( h d m a ,   t e m p )   = =   R E S E T )  
     {  
         i f ( ( _ _ H A L _ D M A _ G E T _ F L A G ( h d m a ,   _ _ H A L _ D M A _ G E T _ T E _ F L A G _ I N D E X ( h d m a ) )   ! =   R E S E T ) )  
         {  
             / *   W h e n   a   D M A   t r a n s f e r   e r r o r   o c c u r s   * /  
             / *   A   h a r d w a r e   c l e a r   o f   i t s   E N   b i t s   i s   p e r f o r m e d   * /  
             / *   C l e a r   a l l   f l a g s   * /  
             h d m a - > D m a B a s e A d d r e s s - > I F C R   =   ( D M A _ I S R _ G I F 1   < <   h d m a - > C h a n n e l I n d e x ) ;  
  
             / *   U p d a t e   e r r o r   c o d e   * /  
             S E T _ B I T ( h d m a - > E r r o r C o d e ,   H A L _ D M A _ E R R O R _ T E ) ;  
  
             / *   C h a n g e   t h e   D M A   s t a t e   * /  
             h d m a - > S t a t e =   H A L _ D M A _ S T A T E _ R E A D Y ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h d m a ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f ( ( T i m e o u t   = =   0 U )   | |   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   T i m e o u t ) )  
             {  
                 / *   U p d a t e   e r r o r   c o d e   * /  
                 S E T _ B I T ( h d m a - > E r r o r C o d e ,   H A L _ D M A _ E R R O R _ T I M E O U T ) ;  
  
                 / *   C h a n g e   t h e   D M A   s t a t e   * /  
                 h d m a - > S t a t e   =   H A L _ D M A _ S T A T E _ R E A D Y ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h d m a ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
     }  
  
     i f ( C o m p l e t e L e v e l   = =   H A L _ D M A _ F U L L _ T R A N S F E R )  
     {  
         / *   C l e a r   t h e   t r a n s f e r   c o m p l e t e   f l a g   * /  
         _ _ H A L _ D M A _ C L E A R _ F L A G ( h d m a ,   _ _ H A L _ D M A _ G E T _ T C _ F L A G _ I N D E X ( h d m a ) ) ;  
  
         / *   T h e   s e l e c t e d   C h a n n e l x   E N   b i t   i s   c l e a r e d   ( D M A   i s   d i s a b l e d   a n d  
         a l l   t r a n s f e r s   a r e   c o m p l e t e )   * /  
         h d m a - > S t a t e   =   H A L _ D M A _ S T A T E _ R E A D Y ;  
     }  
     e l s e  
     {  
         / *   C l e a r   t h e   h a l f   t r a n s f e r   c o m p l e t e   f l a g   * /  
         _ _ H A L _ D M A _ C L E A R _ F L A G ( h d m a ,   _ _ H A L _ D M A _ G E T _ H T _ F L A G _ I N D E X ( h d m a ) ) ;  
     }  
      
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h d m a ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e s   D M A   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h d m a :   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .      
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ D M A _ I R Q H a n d l e r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     u i n t 3 2 _ t   f l a g _ i t   =   h d m a - > D m a B a s e A d d r e s s - > I S R ;  
     u i n t 3 2 _ t   s o u r c e _ i t   =   h d m a - > I n s t a n c e - > C C R ;  
      
     / *   H a l f   T r a n s f e r   C o m p l e t e   I n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     i f   ( ( ( f l a g _ i t   &   ( D M A _ F L A G _ H T 1   < <   h d m a - > C h a n n e l I n d e x ) )   ! =   R E S E T )   & &   ( ( s o u r c e _ i t   &   D M A _ I T _ H T )   ! =   R E S E T ) )  
     {  
         / *   D i s a b l e   t h e   h a l f   t r a n s f e r   i n t e r r u p t   i f   t h e   D M A   m o d e   i s   n o t   C I R C U L A R   * /  
         i f ( ( h d m a - > I n s t a n c e - > C C R   &   D M A _ C C R _ C I R C )   = =   0 U )  
         {  
             / *   D i s a b l e   t h e   h a l f   t r a n s f e r   i n t e r r u p t   * /  
             _ _ H A L _ D M A _ D I S A B L E _ I T ( h d m a ,   D M A _ I T _ H T ) ;  
         }  
         / *   C l e a r   t h e   h a l f   t r a n s f e r   c o m p l e t e   f l a g   * /  
         _ _ H A L _ D M A _ C L E A R _ F L A G ( h d m a ,   _ _ H A L _ D M A _ G E T _ H T _ F L A G _ I N D E X ( h d m a ) ) ;  
  
         / *   D M A   p e r i p h e r a l   s t a t e   i s   n o t   u p d a t e d   i n   H a l f   T r a n s f e r   * /  
         / *   b u t   i n   T r a n s f e r   C o m p l e t e   c a s e   * /  
  
         i f ( h d m a - > X f e r H a l f C p l t C a l l b a c k   ! =   N U L L )  
         {  
             / *   H a l f   t r a n s f e r   c a l l b a c k   * /  
             h d m a - > X f e r H a l f C p l t C a l l b a c k ( h d m a ) ;  
         }  
     }  
  
     / *   T r a n s f e r   C o m p l e t e   I n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     e l s e   i f   ( ( ( f l a g _ i t   &   ( D M A _ F L A G _ T C 1   < <   h d m a - > C h a n n e l I n d e x ) )   ! =   R E S E T )   & &   ( ( s o u r c e _ i t   &   D M A _ I T _ T C )   ! =   R E S E T ) )  
     {  
         i f ( ( h d m a - > I n s t a n c e - > C C R   &   D M A _ C C R _ C I R C )   = =   0 U )  
         {  
             / *   D i s a b l e   t h e   t r a n s f e r   c o m p l e t e   a n d   e r r o r   i n t e r r u p t   * /  
             _ _ H A L _ D M A _ D I S A B L E _ I T ( h d m a ,   D M A _ I T _ T E   |   D M A _ I T _ T C ) ;      
  
             / *   C h a n g e   t h e   D M A   s t a t e   * /  
             h d m a - > S t a t e   =   H A L _ D M A _ S T A T E _ R E A D Y ;  
         }  
         / *   C l e a r   t h e   t r a n s f e r   c o m p l e t e   f l a g   * /  
             _ _ H A L _ D M A _ C L E A R _ F L A G ( h d m a ,   _ _ H A L _ D M A _ G E T _ T C _ F L A G _ I N D E X ( h d m a ) ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h d m a ) ;  
  
         i f ( h d m a - > X f e r C p l t C a l l b a c k   ! =   N U L L )  
         {  
             / *   T r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
             h d m a - > X f e r C p l t C a l l b a c k ( h d m a ) ;  
         }  
     }  
  
     / *   T r a n s f e r   E r r o r   I n t e r r u p t   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     e l s e   i f   ( (   R E S E T   ! =   ( f l a g _ i t   &   ( D M A _ F L A G _ T E 1   < <   h d m a - > C h a n n e l I n d e x ) ) )   & &   ( R E S E T   ! =   ( s o u r c e _ i t   &   D M A _ I T _ T E ) ) )  
     {  
         / *   W h e n   a   D M A   t r a n s f e r   e r r o r   o c c u r s   * /  
         / *   A   h a r d w a r e   c l e a r   o f   i t s   E N   b i t s   i s   p e r f o r m e d   * /  
         / *   D i s a b l e   A L L   D M A   I T   * /  
         _ _ H A L _ D M A _ D I S A B L E _ I T ( h d m a ,   ( D M A _ I T _ T C   |   D M A _ I T _ H T   |   D M A _ I T _ T E ) ) ;  
  
         / *   C l e a r   a l l   f l a g s   * /  
         h d m a - > D m a B a s e A d d r e s s - > I F C R   =   ( D M A _ I S R _ G I F 1   < <   h d m a - > C h a n n e l I n d e x ) ;  
  
         / *   U p d a t e   e r r o r   c o d e   * /  
         h d m a - > E r r o r C o d e   =   H A L _ D M A _ E R R O R _ T E ;  
  
         / *   C h a n g e   t h e   D M A   s t a t e   * /  
         h d m a - > S t a t e   =   H A L _ D M A _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h d m a ) ;  
  
         i f   ( h d m a - > X f e r E r r o r C a l l b a c k   ! =   N U L L )  
         {  
             / *   T r a n s f e r   e r r o r   c a l l b a c k   * /  
             h d m a - > X f e r E r r o r C a l l b a c k ( h d m a ) ;  
         }  
     }  
     r e t u r n ;  
 }  
  
 / * *  
     *   @ b r i e f   R e g i s t e r   c a l l b a c k s  
     *   @ p a r a m   h d m a :   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ p a r a m   C a l l b a c k I D :   U s e r   C a l l b a c k   i d e n t i f e r  
     *                                         a   H A L _ D M A _ C a l l b a c k I D T y p e D e f   E N U M   a s   p a r a m e t e r .  
     *   @ p a r a m   p C a l l b a c k :   p o i n t e r   t o   p r i v a t e   c a l l b a c s k   f u n c t i o n   w h i c h   h a s   p o i n t e r   t o    
     *                                       a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   a s   p a r a m e t e r .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /                                                      
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ R e g i s t e r C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ,   H A L _ D M A _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   v o i d   ( *   p C a l l b a c k ) (   D M A _ H a n d l e T y p e D e f   *   _ h d m a ) )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
      
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d m a ) ;  
      
     i f ( H A L _ D M A _ S T A T E _ R E A D Y   = =   h d m a - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
         c a s e     H A L _ D M A _ X F E R _ C P L T _ C B _ I D :  
             h d m a - > X f e r C p l t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
              
         c a s e     H A L _ D M A _ X F E R _ H A L F C P L T _ C B _ I D :  
             h d m a - > X f e r H a l f C p l t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;                    
  
         c a s e     H A L _ D M A _ X F E R _ E R R O R _ C B _ I D :  
             h d m a - > X f e r E r r o r C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;                    
              
         c a s e     H A L _ D M A _ X F E R _ A B O R T _ C B _ I D :  
             h d m a - > X f e r A b o r t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;    
              
         d e f a u l t :  
             s t a t u s   =   H A L _ E R R O R ;  
             b r e a k ;                                                                                                                          
         }  
     }  
     e l s e  
     {  
         s t a t u s   =   H A L _ E R R O R ;  
     }    
      
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h d m a ) ;  
      
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f   U n R e g i s t e r   c a l l b a c k s  
     *   @ p a r a m   h d m a :   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ p a r a m   C a l l b a c k I D :   U s e r   C a l l b a c k   i d e n t i f e r  
     *                                         a   H A L _ D M A _ C a l l b a c k I D T y p e D e f   E N U M   a s   p a r a m e t e r .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /                              
 H A L _ S t a t u s T y p e D e f   H A L _ D M A _ U n R e g i s t e r C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ,   H A L _ D M A _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d m a ) ;  
      
     i f ( H A L _ D M A _ S T A T E _ R E A D Y   = =   h d m a - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
         c a s e     H A L _ D M A _ X F E R _ C P L T _ C B _ I D :  
             h d m a - > X f e r C p l t C a l l b a c k   =   N U L L ;  
             b r e a k ;  
  
         c a s e     H A L _ D M A _ X F E R _ H A L F C P L T _ C B _ I D :  
             h d m a - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
             b r e a k ;                    
  
         c a s e     H A L _ D M A _ X F E R _ E R R O R _ C B _ I D :  
             h d m a - > X f e r E r r o r C a l l b a c k   =   N U L L ;  
             b r e a k ;                    
  
         c a s e     H A L _ D M A _ X F E R _ A B O R T _ C B _ I D :  
             h d m a - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
             b r e a k ;    
  
         c a s e       H A L _ D M A _ X F E R _ A L L _ C B _ I D :  
             h d m a - > X f e r C p l t C a l l b a c k   =   N U L L ;  
             h d m a - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
             h d m a - > X f e r E r r o r C a l l b a c k   =   N U L L ;  
             h d m a - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
             b r e a k ;    
  
         d e f a u l t :  
             s t a t u s   =   H A L _ E R R O R ;  
             b r e a k ;  
         }  
     }  
     e l s e  
     {  
         s t a t u s   =   H A L _ E R R O R ;  
     }    
      
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h d m a ) ;  
      
     r e t u r n   s t a t u s ;  
 }  
      
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *     @ b r i e f         P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                         # # # # #   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o  
             ( + )   C h e c k   t h e   D M A   s t a t e  
             ( + )   G e t   e r r o r   c o d e  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   D M A   h a n d e   s t a t e .  
     *   @ p a r a m     h d m a :   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ D M A _ S t a t e T y p e D e f   H A L _ D M A _ G e t S t a t e ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     / *   R e t u r n   D M A   h a n d l e   s t a t e   * /  
     r e t u r n   h d m a - > S t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   D M A   e r r o r   c o d e .  
     *   @ p a r a m     h d m a   :   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ r e t v a l   D M A   E r r o r   C o d e  
     * /  
 u i n t 3 2 _ t   H A L _ D M A _ G e t E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     r e t u r n   h d m a - > E r r o r C o d e ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   D M A _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t s   t h e   D M A   T r a n s f e r   p a r a m e t e r .  
     *   @ p a r a m     h d m a :               p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                           t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   C h a n n e l .  
     *   @ p a r a m     S r c A d d r e s s :   T h e   s o u r c e   m e m o r y   B u f f e r   a d d r e s s  
     *   @ p a r a m     D s t A d d r e s s :   T h e   d e s t i n a t i o n   m e m o r y   B u f f e r   a d d r e s s  
     *   @ p a r a m     D a t a L e n g t h :   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   s o u r c e   t o   d e s t i n a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   v o i d   D M A _ S e t C o n f i g ( D M A _ H a n d l e T y p e D e f   * h d m a ,   u i n t 3 2 _ t   S r c A d d r e s s ,   u i n t 3 2 _ t   D s t A d d r e s s ,   u i n t 3 2 _ t   D a t a L e n g t h )  
 {  
     / *   C l e a r   a l l   f l a g s   * /  
     h d m a - > D m a B a s e A d d r e s s - > I F C R   =   ( D M A _ I S R _ G I F 1   < <   h d m a - > C h a n n e l I n d e x ) ;  
  
     / *   C o n f i g u r e   D M A   C h a n n e l   d a t a   l e n g t h   * /  
     h d m a - > I n s t a n c e - > C N D T R   =   D a t a L e n g t h ;  
  
     / *   M e m o r y   t o   P e r i p h e r a l   * /  
     i f ( ( h d m a - > I n i t . D i r e c t i o n )   = =   D M A _ M E M O R Y _ T O _ P E R I P H )  
     {  
         / *   C o n f i g u r e   D M A   C h a n n e l   d e s t i n a t i o n   a d d r e s s   * /  
         h d m a - > I n s t a n c e - > C P A R   =   D s t A d d r e s s ;  
  
         / *   C o n f i g u r e   D M A   C h a n n e l   s o u r c e   a d d r e s s   * /  
         h d m a - > I n s t a n c e - > C M A R   =   S r c A d d r e s s ;  
     }  
     / *   P e r i p h e r a l   t o   M e m o r y   * /  
     e l s e  
     {  
         / *   C o n f i g u r e   D M A   C h a n n e l   s o u r c e   a d d r e s s   * /  
         h d m a - > I n s t a n c e - > C P A R   =   S r c A d d r e s s ;  
  
         / *   C o n f i g u r e   D M A   C h a n n e l   d e s t i n a t i o n   a d d r e s s   * /  
         h d m a - > I n s t a n c e - > C M A R   =   D s t A d d r e s s ;  
     }  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ D M A _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  